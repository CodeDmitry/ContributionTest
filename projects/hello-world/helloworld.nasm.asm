;+--------------------------------------------------------------------------------------------------+
;| [code-columns: 100]                                                                              |
;| A Hello World bootloader in Netwide Assembly(NASM).                                              |
;| Written by Dmitry Makhnin.                                                                       |
;| see http://fisnikhasani.com/building-your-own-bootloader/                                        |
;+--------------------------------------------------------------------------------------------------+
    bits    16
    org     0x7c00

    jmp main
message     db "Hello World, booting from low-level 16 bit...", 0x0
message_b   db "Dmitry's own bootloader program written in x86 assembly language.", 0x0
mprompt     db "Press any key to reboot...", 0x0

puts:
    lodsb
    or      al, al
    jz      complete
    mov     ah, 0x0e
    int     0x10
    jmp     puts

complete:
    call    print_crlf

print_crlf:
    mov     al, 0
    stosb

    mov     ah, 0x0e
    mov     al, 0x0d
    int     0x10

    mov     al, 0x0a
    int     0x10
    ret

reboot:
    mov     si, mprompt
    call    puts
    call    getch

    db      0x0ea
    dw      0x0000
    dw      0xffff

getch:
    mov     ah, 0
    int     0x16
    ret

main:
    cli

    mov     ax, cs
    mov     ds, ax
    mov     es, ax
    mov     ss, ax
    sti

    mov     si, message_b
    call    puts

    mov     si, message
    call    puts

    call    print_crlf
    call    print_crlf

    call    reboot

sig:
    times   510 - ($-$$) db 0
    dw      0xaa55
