section	.text
	global ft_strcpy

ft_strcpy:
    xor rcx, rcx
    xor rdx, rdx
	xor rax, rax
    cmp rsi, 0
	je ft_strcpy_err
    cmp rdi, 0
	je ft_strcpy_err

ft_strcpy_while:
    cmp BYTE [rsi + rcx], 0	
	je ft_strcpy_ret
    mov dl, BYTE [rsi + rcx]
	mov BYTE [rdi + rcx], dl
	inc rcx                 
	jmp ft_strcpy_while     

ft_strcpy_ret:
	mov dl, 0               
	mov BYTE [rdi + rcx], dl
	mov rax, rdi            
	ret                     

ft_strcpy_err:
    xor rax, rax            
    ret