section .data
	hello db 'Hello, Holberton', 10, 0

section .text
	global main
	extern printf

main:
	; prepare arguments for printf
	mov rdi, hello	; format
	xor rax, rax	; clear rax to set up for variadic function

	; Call printf
	call printf

	; Return from main
	mov eax, 0x60	; syscall number (sys_exit)
	xor edi, edi	; exit code
	syscall		; call kernel
