.section  .data
msg:
    .asciz "Hello, World!\n"
msg_len = . - msg

.section .text
.globl _start
_start:
    movl $4, %eax
    movl $1, %ebx
    movl $msg, %ecx
    movl $msg_len, %edx
    int $0x80
    movl $1, %eax
    xorl %ebx, %ebx
    int $0x80
