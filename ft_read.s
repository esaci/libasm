section	.text
	global ft_read
    extern __errno_location

ft_read:
    xor rax, rax
	syscall					;0 = read | rdi = 1ere valeur => fd | rsi deuxieme valeur =>  *buf| rdx troisieme valeur => *count
    cmp rax, 0
    jl ft_read_error
    jmp ft_read_end

ft_read_error:
    neg rax
    mov rdi, rax
    call __errno_location wrt ..plt
    mov [rax], rdi
    mov rax, -1

ft_read_end:
    ret	