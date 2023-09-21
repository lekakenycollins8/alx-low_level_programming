section .data
    hello db "Hello, Holberton", 10, 0  ; Message to be printed

section .text
    extern printf

    global main

main:
    sub rsp, 8           ; Align the stack
    lea rdi, [hello]     ; Load the address of the hello message
    call printf          ; Call printf

    ; Exit the program
    mov rax, 60          ; syscall: exit
    xor rdi, rdi         ; status: 0
    syscall

