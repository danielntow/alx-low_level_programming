section .data
    hello db 'Hello, Holberton', 0
section .text
    global _start
_start:
    push hello
    call printf
    add rsp, 8
    mov eax, 0
    ret

