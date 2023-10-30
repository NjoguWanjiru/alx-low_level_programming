section .data
    hello db 'Hello, Holberton',10 ; The string to be printed
    hello_len equ $ - hello        ; Calculate the length of the string

section .text
    global _start

_start:
    ; Write the message to stdout
    mov eax, 4          ; sys_write
    mov ebx, 1          ; stdout file descriptor
    mov ecx, hello      ; pointer to the string
    mov edx, hello_len  ; length of the string
    int 0x80            ; Call kernel

    ; Exit the program
    mov eax, 1          ; sys_exit
    xor ebx, ebx        ; Return status: 0
    int 0x80            ; Call kernel
