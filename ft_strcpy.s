section .text
    global _ft_strcpy

_ft_strcpy:
            mov rax, 0
            cmp BYTE [rsi + rax], 0
            je _exit
            mov dl, BYTE [rsi + rax]
            mov BYTE [rdi + rax], dl
            inc rax
_exit:
        mov rax, rdi
        ret