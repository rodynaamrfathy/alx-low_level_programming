section		.data
	hello db 'Hello, World', 0xa, 0

section 	.text
	extern  printf
	global  main

main:
	mov edi, hello		; Load the address of the message
	call printf		; Call the printf function

	xor eax, eax		; Clear the eax register (return value of printf)
	ret
