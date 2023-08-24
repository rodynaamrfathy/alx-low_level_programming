section 	.text
	extern  printf
	global  main

main:

	mov		edi, msg
	mov		eax, 0
	call	printf

section		.data
	hello db 'Hello, World', 0xa, 0
