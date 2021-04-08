section	.text
	global ft_strcmp

ft_strcmp:
    xor rcx, rcx
    xor rdx, rdx
	xor rax, rax

ft_strcmp_while:
    mov al, BYTE [rsi + rcx]
    mov dl, BYTE [rdi + rcx]
    cmp al, 0
    je  ft_strcmp_ret
    cmp dl, 0
    je  ft_strcmp_ret
    cmp al, dl
    jne ft_strcmp_ret
    inc rcx
	jmp ft_strcmp_while

ft_strcmp_ret:
    sub rdx, rax
    mov rax, rdx
    ret
