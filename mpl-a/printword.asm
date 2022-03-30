%macro rw 3
	mov rax, %1
	mov rdi, 01
	mov rsi, %2
	mov rdx, %3
	syscall
%endmacro

section .data	
	num dw 36h
	cnt db 04h
	
section .bss
	asciiarr resb 4
	
global _start
section .text
 _start:
 
 call htoascii
 mov rax,60
 mov rdi,00
 syscall
 
htoascii: 
 	mov rsi ,asciiarr
 	mov bx ,word[num]
again:  rol bx ,04
	mov al ,bl
	and al ,0Fh
	cmp al ,09h
	jbe next
	add al ,07h
next:	add al ,30h
	mov [rsi]  ,al
	inc rsi
	dec byte [cnt]
	jnz again	
 	rw 01, asciiarr, 04
 	ret

 	
