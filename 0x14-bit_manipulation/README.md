# 0x14-bit_manipulation

## 0-binary_to_uint.c
> A function that converts a binary number to an unsigned int.
> - Prototype: ``` unsigned int binary_to_uint(const char *b); ```.
> - ``` b ``` is pointing to a string of ``` 0 ``` and ``` 1 ``` chars.
> - Returns the converted number or 0: 
> * if theres one or more chars in the string ``` b ``` that is not ``` 0 ``` or ``` 1 ```.
> * ``` b ``` is ``` NULL ```.

## 1-print_binary.c
> A function that prints the binary representation of a number.
> - Prototype: ``` void print_binary(unsigned long int n); ```.
> - Using Bitwise AND.

## 2-get_bit.c
> A function that returns the value of a bit at a given index.
> - Prototype: ``` int get_bit(unsigned long int n, unsigned int index); ```.
> - ``` index ``` is the index starting from ``` 0 ``` of the bit you want to get.
> - Returns the value of the bit at ``` index ``` or ``` -1 ``` if an error occured.

## 3-get_bit.c
> A function that sets the value of a bit to ``` 1 ``` at a given index.
> - Prototype: ``` int set_bit(unsigned long int *n, unsigned int index); ```.
> - ``` index ``` is the index starting from ``` 0 ``` of the bit you want to set.
> - Returns ``` 1 ``` if it worked and ``` -1 ``` if an error occured.

## 4-clear_bit.c
>  A function that sets the value of a bit to ``` 0 ``` at a given index.
> - Prototype: ``` int clear_bit(unsigned long int *n, unsigned int index); ```.
> - ``` index ``` is the index starting from ``` 0 ``` of the bit you want to set.
> - Returns ``` 1 ``` if it worked and ``` -1 ``` if an error occured.

## 5-flip_bits.c
> A function that returns the number of bits you would need to flip to get from one number to
another.
> - Prototype: ``` unsigned int flip_bits(unsigned long int n, unsigned long int m); ```.

## 100-get_endianess.c
> A function that checks the endianness.
> - Prototype: ``` int get_endianness(void); ```.
> - Returns ``` 0 ``` if big endian, ``` 1 ``` if little endian.

## 101-password
> A file that contains the password for the [crackme3](https://github.com/holbertonschool/0x13.c) program.

## main.h
> Header file contains all function prototypes of functions in this project.

