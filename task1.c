#include <stdio.h>
#include <stdlib.h>

void write(char file[]);
void read(char file[]);
void append(char file[]);

int main() {
    char file[100];
    int choice;

    printf("\nEnter File Name (.extention -> txt): ");
    gets(file);

    while (1) {
        printf("\nChoose a File operation: \n");
        printf("1. Create and Write in File \n");
        printf("2. Read from File \n");
        printf("3. Append to File \n");
        printf("4. Exit \n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1 :
                    write(file);
                    break;
            case 2 :
                    read(file);
                    break;
            case 3 :
                    append(file);
                    break;
            case 4 :
                    printf("Exiting.. \n");
                    return 0;
            default :
                    printf("\n Invalid Operation selected! Try Again!");
                    
        }

    }
}

void write(char file[]) {
    FILE *fptr;
    char content[1000];

    fptr = fopen(file, "w");
    
    if (fptr == NULL) {
        printf("Error opening file..\n");
        return;
    }

    printf("\nEnter Content of the file %s...(End with Enter): \n \n", file);
    getchar();
    fgets(content, sizeof(content), stdin);

    fprintf(fptr, "%s", content);
    fclose(fptr);

    printf("\nFile Created/Overwrited successfully! \n");

}


void read(char file[]) {
    FILE *fptr;
    char content[1000];

    fptr = fopen(file, "r");
    
    if (fptr == NULL) {
        printf("\nFile doesn't Exist..\n");
        return;
    }

    printf("\nContent of File %s: \n \n", file);
    while (fgets(content, sizeof(content), fptr) != NULL) {
        printf("%s",content);
    }
    fclose(fptr);
}


void append(char file[]) {
    FILE *fptr;
    char content[1000];

    fptr = fopen(file, "a");
    
    if (fptr == NULL) {
        printf("Error opening file..\n");
        return;
    }

    printf("\nEnter Content to be appended to the file %s...(End with Enter): \n \n", file);
    getchar();
    fgets(content, sizeof(content), stdin);

    fprintf(fptr, "%s", content);
    fclose(fptr);

    printf("\n Content Appended Successfully! \n");
}