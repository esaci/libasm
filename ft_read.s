section	.text
	global ft_read
    extern __errno_location

ft_read:
    xor rax, rax
	syscall					;rax = read | rdi = fd | rsi = *buf| rdx = *count
    cmp rax, 0
    jl ft_read_error
    jmp ft_read_end

ft_read_error:
    neg rax
    push rax
    call __errno_location wrt ..plt
    pop rdi
    mov [rax], rdi
    mov rax, -1

ft_read_end:
    ret	