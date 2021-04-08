section	.text
	global ft_strlen

ft_strlen:
	xor rcx, rcx
	xor rax, rax
	cmp rdi, 0
	je ft_strlen_end

ft_strlen_while:
	cmp BYTE [rdi + rcx], 0
	je ft_strlen_end
	inc rcx
	jmp ft_strlen_while

ft_strlen_end:
	mov rax, rcx
	ret
