;--------------------------------------------------------------------------------------
;
; A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
; Compiled using nasm and gcc.
; nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello
;
;--------------------------------------------------------------------------------------

section .data
format db "%s", 10, 0
message db "Hello, Holberton", 0

section .text
extern printf ;C function to be called
global main ;main function

main:
	push rbp
	mov rdi, format
	mov rsi, message
	mov rax, 0 ;can be xor rax, rax
	call printf ;call C function.

	pop rbp ;restor stack

	mov rax, 0 ;normal, no error, return value
	ret ;return
