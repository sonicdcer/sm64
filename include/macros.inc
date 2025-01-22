#ifndef VERSION_CN
.set gp=64
#endif

.equ K0BASE, 0x80000000
.equ K1BASE, 0xA0000000
.equ K2BASE, 0xC0000000

.macro glabel label
    .global \label
    .balign 4
    .type \label, @function
    \label:
.endm

.macro dlabel label
    .global \label
    \label:
.endm

.macro jlabel label
    .global \label
    .type \label, @function
    \label:
.endm

.macro .word32 x
    .word \x
.endm
