;hello_world.asm
;
;Author: Nicolas Ribeiro - Holberton School Student

global _start



section .text:

_start:
	mov eax, 0x4			; Use the write syscall from /usr/include/x86_64-linux-gnu/asm/unistd_32.h
	mov ebx, 1				; Use the stdout as the fd
	mov ecx, message		; use the message as the buffer
	mov edx, message_length ; Supply the length message
	int 0x80				; int is for interrupt and 0x80 is for running assist call
	
	mov eax, 0x1
	mov ebx, 0
	int 0x80 				; invoke the syscall

section .data:
	message: db "Hello, Holberton!", 0xA
	message_length equ $-message

