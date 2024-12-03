.text
.globl main
# this is a modified version of the Lab4 test program
# which doesn't run in an infinite loop
main:
    addi    t1, zero, 0xff      # t1 = 255
    addi    a0, zero, 0x0       # output = 0
mloop:
    addi    a1, zero, 0x0       # i = 0
iloop:
    addi    a0, a1, 0           # output = i
    addi    a1, a1, 1           # i++
    nop
    bne     a1, t1, iloop       # if i != 255, goto iloop
    nop
    nop
    bne     a0, zero, finish    # enter finish state
    nop
    nop
    

finish:      # expected result is 254
    nop
    bne     a0, zero, finish     # loop forever
    nop
    
    
