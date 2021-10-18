# 0-15-file_io

## 0-read_textfile.c
> A function that reads a text file and prints it to the ``` POSIX ``` standard output.
> - Prototype: ``` ssize_t read_textfile(const char *filename, size_t letters); ```.
> - letters is the number of letters it should read and print.
> - returns the actual numbers it could read and print.
> - If file can not be opened or read, ``` 0 ``` is returned.
> - if ``` filename ``` is ``` NULL ``` the function returns ``` 0 ```.
> - if ``` write ``` fails or does not write the expected amount of bytes, the function returns ```0```.

## 1-create_file.c
> A function that creates a file.
> - Prototype: ``` int create_file(const char *filename, char *text_content); ```.
> - ``` filename ``` is te name of the file to create and ``` text_content ``` is a ``` NULL ```
terminated string to write to the file.
> - Return: ``` 1 ``` on success, ``` -1 ``` on failure.
> - Created file has the permissions ``` rw------- ```. If the file already exists, permissions are
 not changed.
> - If file aready exists, it is truncated.
> - If ``` filename ``` is ``` NULL ``` the function returns ``` -1 ```.
> - If ``` text_content ``` is ``` NULL ``` the function creates an empty file.

## 2-append_text_to_file.c
> A function that appends text at the end of a file.
> - Prototype: ``` int append_text_to_file(const char *filename, char *text_content); ```.
> -  ``` filename ``` is te name of the file to create and ``` text_content ``` is a ``` NULL ```
terminated string to write to the file.
> - Return: ``` 1 ``` on success, ``` -1 ``` on failure.
> - File is not created if it does not exist.
> - If ``` filename ``` is ``` NULL ``` the function returns ``` -1 ```.
> - If ``` text_content ``` is ``` NULL ``` nothin is written to the file.
> - Returns ``` 1 ``` if the file exists and ``` -1 ``` if the file does not exists or required permissions are not granted.

## 3-cp.c
> A program that copies the content of a file to another file.
> - Usage: cp file_from file_to
> - if the number of argument is not the correct one, the function exit with code 97 and prints ``` Usage: cp file_from file_to ```, followed by a new line, on the ``` POSIX ``` standard error.
> - If ``` file_to ``` exists, it is truncated.
> - If ``` file_from ``` does not exist or cannot be read from, the program will exit with a code of ``` 98 ``` and print ``` Error: Can't read from file NAME_OF_THE_FILE ```, followed by a new line on the ``` POSIX ``` standard error.
> - * where ``` NAME_OF_THE_FILE ``` is the first argument passed to the program (argv[1]).
> - If ``` file_to ``` cannot be created or written to, the program exists with a code of ``` 99 ``` and prints ``` Error: Can't write to NAME_OF_THE_FILE ```, followed by a new line, on the  ``` POSIX ``` standard error.
> - * where ```  NAME_OF_THE_FILE ``` is the seconf argument passed to the program (argv[2]);
> - If a file descriptor cannot be closed, the program exits with a code of ``` 100 ``` and prints ``` Error: Can't close fd FD_VALUE ``` , followed by a new line, on the  ``` POSIX ``` standard error.
> - * where ``` FD_VALUE ``` is the value of the file descriptor.
> - Permissions of the created file are: ``` rw-rw-r-- ```. If the file already exists, the permissions are not changed.
> - ``` 1024 ``` bytes are read at a time from the ``` file_from ``` to make less system calls. A buffer is used.

## main.h
> A header file that contains function prototypes of functions written in this project.

