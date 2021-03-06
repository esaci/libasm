section .text
	global ft_strdup
	extern malloc
	extern ft_strlen
	extern ft_strcpy

ft_strdup:
	cmp rdi, 0
	je ft_strdup_error
	call ft_strlen
	inc rax
	push rdi
	mov rdi, rax	; rdi premiere val => taille pour malloc
	call malloc wrt ..plt
	pop r9
	cmp rax, 0
	je ft_strdup_error
	mov rdi, rax
	mov rsi, r9
	call ft_strcpy
	jmp ft_strdup_ret

ft_strdup_error:
	xor rax, rax

ft_strdup_ret:
	ret