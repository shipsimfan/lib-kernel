GLOBAL system_call
system_call:
    push r12     ; Save register because it gets scratched in kernel
    mov r10, rcx ; Move parameter to save from overwrite

    syscall

    pop r12
    ret