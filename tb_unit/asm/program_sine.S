.text
.globl main
main:
    addi    t1, zero, 0x0ff     # t1 = 255
    addi    a0, zero, 0x0       # output = 0
    addi    a1, zero, 0x0       # init a1 = 0
mloop:
    lb     a0, 0(a1)           # a0 = sin (a1)
    addi    a1, a1, 1           # i = i + 1
    bne     t1, zero, mloop     # if t1 != 0 (hint: ALWAYS) goto mloop
