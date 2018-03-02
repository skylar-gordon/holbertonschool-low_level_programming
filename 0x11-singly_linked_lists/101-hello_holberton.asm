	section .data
fmt	 db "%s",10,0
msg	 db "Hello, Holberton",0

section .text
	extern printf
	global main

main:
	mov	rax, 0
	mov	rdi, fmt
	mov	rsi, msg
	mov	rdx, 17
	call printf

	mov	rbx, 0
	mov	rax, 1
	ret
