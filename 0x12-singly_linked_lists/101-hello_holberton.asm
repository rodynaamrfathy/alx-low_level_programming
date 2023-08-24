section .data
	hello db 'Hello, World',0

section .text
global _start

_start:

	; Write syscall (sys_write)
	mov rax, 1		; syscall number for sys_write
	mov rdi, 1		; file descriptor 1 (stdout)
	lea rsi, [hello]	; adress of the string to print
	mov rdx, 13		; length of the string
	syscall

	; Exit syscall (sys_exit)
	mov rax, 60		; syscall number for sys_exit
	xor rdi, rdi		; exit status 0
	syscall
