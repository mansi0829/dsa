%macro rw 3
	mov rax, %1
	mov rdi, 01
	mov rsi, %2
	mov rdx, %3
	syscall
%endmacro

section .data	
	num db 3Fh
	cnt db 00h
	pcount db 00h
	ncount db 00h
	array dq 1212121212121212h, 9898989898989898h
	
section .bss
	asciiarr resb 2
	
global _start
section .text
 _start:
 
 call htoascii
 mov rax,60
 mov rdi,00
 syscall
 
htoascii: 
 	mov rsi ,asciiarr
 	mov bl ,byte[num]
again:  rol bl ,04
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
 	rw 01, asciiarr, 02
 	ret

 	
