section .text   ;Section containing the executable part of the program
   global main  ;Declaration of main function as global symbol

main:		;Start of main function
   mov edx,len  ;Load the msg length in edx register
   mov ecx,msg  ;Load the msg adress in ecx register
   mov ebx,1	;Load the stdout in ebx register
   mov eax,4	;Load the numero for system call (sys_write) in eax register
   int 0x80	;System call of sys_write for write msg on standard output

   mov eax,0	;Load the numero for system call (sys_exit) in eax register
   int 0x80	;System call sys_exit for end program

section .data	;Section containing the data used by program

   msg: db 'Hello, Holberton', 0xa ;Define the msg with newline ('OxA') in ram
   len: equ $ - msg		   ;Sub & of label in creation and & of msg label
				   ;Calcul the bytes length between the two &
