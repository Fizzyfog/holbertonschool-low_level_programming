#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/*for defining system data types used by system calls */
#include <sys/types.h>

/* defining struct returned by functions, ex: stat(), fstat(), lstat() */
#include <sys/stat.h>

/* Function prototypes */
int _putchar(char c);
int _strlen(char *s);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
