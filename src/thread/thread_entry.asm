EXTERN exit_thread

GLOBAL thread_entry
thread_entry:
    ; Get stack pointer
    mov rsp, [rdi]

    ; Get entry
    add rdi, 8
    mov rax, [rdi]

    ; Push end of stack trace
    push 0
    push 0
    
    ; Call entry
    call rax

    ; Exit
    mov rdi, rax
    call exit_thread
    