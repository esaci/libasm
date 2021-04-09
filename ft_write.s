section	.text
	global ft_write
    extern __errno_location

ft_write:
    mov rax, 1
    syscall					; rax = write | rdi = fd | rsi = *buf| rdx = *count
    cmp rax, 0
    jl ft_write_error
    jmp ft_write_ret

ft_write_error:
    neg rax
    push rax                 
    call __errno_location wrt ..plt
    pop rdi
    mov [rax], rdi
    mov rax, -1

ft_write_ret:
    ret
