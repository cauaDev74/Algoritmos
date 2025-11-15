section .data
    msg db "Hello, World!", 10
    len equ $ - msg

section .text
    global _start

_start:
    ; syscall: write(1, msg, len)
    mov rax, 1        ; número da syscall write
    mov rdi, 1        ; file descriptor 1 (stdout)
    mov rsi, msg      ; endereço da string
    mov rdx, len      ; tamanho da string
    syscall

    ; syscall: exit(0)
    mov rax, 60       ; número da syscall exit
    mov rdi, 0        ; código de saída
    syscall
