%macro rw 3
	mov rax, %1
	mov rdi, 01
	mov rsi, %2
	mov rdx, %3
	syscall
%endmacro

section .data
	msg db "Enter the string"
	len1 equ $-msg
	
	msg2 db "Length of string"
	len2 equ $-msg2
	
	cnt db 20
	
	
section .bss
	mystr resb 20
	mystrlen resb 02
	asciiarr resb 02
	
global _start	
section .text
_start  :
	
	rw 01,msg,len1
	rw 00,mystr,20	

	mov rsi, mystr
again:	mov al, [rsi]
	cmp al, 10
	jz break
	inc byte[mystrlen]
	inc rsi
	dec byte[cnt]
	jnz again

label:  mov al, byte[mystrlen]
	
break:   
	mov al, byte[mystrlen]
	mov rsi asciiarr
	mov byte[cnt],02
	
down:   rol bl, 04
        mov bl, al
	mov al, 0Fh
	cmp al, 09h
	jbe next1
	add bl,07h 	
	syscall

next1:  add bl, 30h
        mov [rsi], bl
        inc rsi
        dec byte[cnt]
        jnz down
       
        mov rax, 01
        mov rdi, 01
        mov rsi, m2
        mov rdx, len2
        syscall
       
        mov rax, 01
        mov rdi, 01
        mov rsi, asciiarr
        mov rdx, 02
        syscall
	
	mov rax, 60
	mov rdi, 00
	syscall
	



	
	
