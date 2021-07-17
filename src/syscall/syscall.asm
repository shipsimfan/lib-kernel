GLOBAL system_call
system_call:
    push r10
    mov r10, rcx

    ; BUG BUG
    ; For some reason, an interrupt is firing while DPL = 0 and RSP < KERNEL_VMA
    ; This pages in the next 'push' point and one page later just in case.
    ; This appears to have fixed the bug but this is not a suitable long term solution
    ; The main problem with this fix is security, a malicious program could easily
    ; exclude these lines from their code and crash the whole system.
    mov rax, rsp
    sub rax, 8
    mov QWORD [rax], 0
    sub rax, 0x1000
    mov QWORD [rax], 0

    syscall
    pop r10
    ret