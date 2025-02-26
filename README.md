# FILE-HANDLING-PROGRAM

*COMPANY*: CODETECH IT SOLUTIONS

*NAME*: RIDHA QAZI

*INTERN ID*: CODHC68

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

 File handling is a fundamental aspect of programming that allows data to be stored, retrieved, and modified efficiently. Unlike variables, which store temporary data, files enable long-term data storage, making them essential for many applications. In this task, I developed a C program that demonstrates various file operations, including creating, writing, reading, and appending data to a file. 
 To accomplish this, I used Visual Studio Code as my coding environment due to its intuitive interface, syntax highlighting, and debugging tools. I compiled and executed the program using the GCC compiler on a Windows OS, utilizing the command prompt for compilation and execution. 
 
 The program follows a menu-driven approach, allowing users to interact with files through simple keyboard inputs. When the program starts, it prompts the user to enter a file name, after which they can choose from four options: create and write, read, append, or exit. Each operation is implemented as a separate function: the write() function creates a new file or overwrites an existing one, the read() function displays the contents of a file, and the append() function adds new data to an existing file. I used fopen() to open files in different modes ("w" for writing, "r" for reading, and "a" for appending), ensuring proper handling of file operations. One key challenge I faced was handling user input correctly, as scanf() does not handle multi-line inputs well. To resolve this, I used fgets(), which reads entire lines safely without buffer overflow issues. Additionally, I included error handling to check whether a file exists before reading it, preventing runtime errors. 
 
 After writing the code, I conducted multiple test cases to verify its functionality. I created a file, wrote sample text, read it to ensure the content was stored correctly, and appended additional data to confirm that previous content was not overwritten. The program performed as expected, allowing smooth file operations.
 ## (See task1.txt as an example) [task1.txt](https://github.com/user-attachments/files/18988448/task1.txt)

 
 This program has several practical applications. It can be used in text editors, allowing users to save and modify notes, in log file management, where applications need to store error logs without overwriting previous entries, and in student record systems, where simple text files can store academic data without requiring a database. Businesses can also use it for report generation, where data can be saved, updated, and reviewed later. Additionally, the logic behind this program forms the basis for more advanced applications, such as database management systems, file-based storage solutions, and automated report generators. By working on this task, I strengthened my understanding of file handling in C, particularly how to open, write, read, and append to files using different modes. I also improved my skills in handling user input and preventing errors through validation checks. The ability to work with files efficiently is a crucial skill in software development, as many real-world applications require data to be stored and retrieved dynamically. This project provided a solid foundation for further exploring data persistence, structured file formats, and binary file operations, which are useful in more complex applications such as database engines, cloud storage solutions, and document processing systems. 
 Overall, this task was an invaluable learning experience in understanding the importance of file handling in C programming and its vast real-world applications.

 ## output

![Image](https://github.com/user-attachments/assets/746f49c1-76d1-45b0-873f-960dcc97aafa)
