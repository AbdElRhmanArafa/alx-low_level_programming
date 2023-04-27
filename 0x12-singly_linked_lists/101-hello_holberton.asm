lobal main
extern printf

section .data
  format: db 'Hello, Holberton', 0Ah, 0

section .text
main:
  ; Call printf with the format string
  mov edi, format
  xor eax, eax
  call printf

  ; Exit program
  xor eax, eax
  ret
