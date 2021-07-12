GLOBAL system_call
system_call:
    push r10
    mov r10, rcx
    syscall
    pop r10
    ret