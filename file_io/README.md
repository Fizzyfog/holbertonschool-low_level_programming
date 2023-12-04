# C- File I/O 

This README file provides an overview of file input/output (I/O) operations in the C programming language and the tasks done at Holberton School for this topic. It covers topics such as creating, opening, closing, reading, and writing files, as well as file descriptors, standard file descriptors, POSIX names, I/O system calls, flags, file permissions, system calls, and the difference between functions and system calls.

## Table of Contents
- [File I/O Operations](#file-i/o-operations)
- [File Descriptors](#file-descriptors)
- [Standard File Descriptors](#standard-file-descriptors)
- [I/O System Calls](#i/o-system-calls)
- [Flags](#flags)
- [File Permissions](#file-permissions)
- [System Calls](#system-calls)
- [Functions vs System Calls](#functions-vs-system-calls)
- [Files](#files)

## Files

1. `0-read_textfile.c`: Write a function that reads a text file and prints it to the POSIX standard output.
2. `1-create_file.c`: Create a function that creates a file.
3. `2-append_text_to_file.c`: Write a function that appends text at the end of a file.
4. `3-cp.c`: Write a program that copies the content of a file to another file.

## Compiler Command

To compile C programs with specific flags, use the following command:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89`


## File I/O Operations

File I/O operations involve creating, opening, closing, reading, and writing files. These operations are essential for manipulating file data in a C program.

## File Descriptors

A file descriptor is a non-negative integer that uniquely identifies an open file in a process. It is used to perform various operations on the file, such as reading and writing.

## Standard File Descriptors

The three standard file descriptors are:

1. STDIN_FILENO: Standard input, which is typically connected to the keyboard.
2. STDOUT_FILENO: Standard output, which is typically connected to the terminal.
3. STDERR_FILENO: Standard error, which is typically connected to the terminal.

These file descriptors have their POSIX names as well, which are STDIN_FILENO, STDOUT_FILENO, and STDERR_FILENO, respectively.

## I/O System Calls

The I/O system calls, such as open, close, read, and write, are used to perform file I/O operations in C programs. These system calls provide low-level access to files and are essential for working with file data.

## Flags

Flags, such as O_RDONLY, O_WRONLY, and O_RDWR, are used with the open system call to specify the file access mode. O_RDONLY is used for read-only access, O_WRONLY is used for write-only access, and O_RDWR is used for read-write access.

## File Permissions

File permissions determine who can read, write, and execute a file. When creating a file with the open system call, you can specify the file permissions using the mode parameter. The permissions can be set using symbolic notation (e.g., "rwxr-xr-x") or octal notation (e.g., 0644).

## System Calls

A system call is a request made by a program to the operating system kernel. It provides an interface for programs to access low-level operating system services, such as file I/O, process management, and network communication.

## Functions vs System Calls

Functions are higher-level abstractions that are built on top of system calls. They provide a more convenient and user-friendly way to perform common operations. System calls, on the other hand, provide direct access to the underlying operating system services.

For more detailed information on each topic, please refer to the appropriate online resources.

