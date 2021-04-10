section	.text
	global ft_write
    extern __errno_location

ft_write:
    mov rax, 1
    syscall					; 1 = write  rdi = 1ere valeur => fd | rsi deuxieme valeur =>  *buf| rdx troisieme valeur => *count
    cmp rax, 0              ; rax valeur de retour de write
    jl ft_write_error
    jmp ft_write_ret

ft_write_error:
    neg rax
    push rax                 
    call __errno_location wrt ..plt     ; on a dans rax ladresse retourne depuis __errno_location
    pop rdi
    mov [rax], rdi
    mov rax, -1

ft_write_ret:
    ret
