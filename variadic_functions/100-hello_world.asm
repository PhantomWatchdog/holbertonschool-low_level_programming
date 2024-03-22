global  main	;Declaration of main function as global symbol
section .text	;Section containing the executable part of the program

main:		;Start of main function

        mov     rax, 4	;Load the numero system call for sys_write in rax register
        mov     rbx, 1	;Load the numero of file in rbx register (stdout)
        mov     rcx, message	;Load & of messagein rcx register
        mov     rdx, 13	;Load the length of message in rdx register
        int	0x80	;System call of sys_write for write msg on standard output

        mov     rax, 1	;Load the numero system call for sys_exit in rax register
        xor     rbx, rbx	;Make XOR op in rbx register
        int	0x80	;System call of sys_exit for end program

message:		;Start of data section
        db      "Hello, World", 10	;db define n bytes in ram with newline (10)
