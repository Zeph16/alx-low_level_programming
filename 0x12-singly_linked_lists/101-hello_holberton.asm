global main

section .text
main:
  mov rax, 1
  mov rdi, 1
  mov rsi, hol
  mov rdx, hollen
  syscall

  mov rax, 60
  mov rdi, 0
  syscall

section .rodata
  hol: db "Hello, Holberton", 10
  hollen: equ $ - hol
