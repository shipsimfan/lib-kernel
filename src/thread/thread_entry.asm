EXTERN exit_thread
EXTERN set_current_thread_tls

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
    
    ; Save entry
    push rax

    ; Set tls
    add rdi, 8
    mov rdi, [rdi]
    call set_current_thread_tls

    ; Call entry
    pop rax
    call rax

    ; Exit
    mov rdi, rax
    call exit_thread
    
GLOBAL get_fs_base
get_fs_base:
    mov rax, [fs:0x0]
    lea rax, [rax]
    ret