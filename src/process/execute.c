#include <los/process.h>

#include <los/syscall.h>

extern void get_current_stdio(StandardIO* stdio);

ProcessID execute(const char* filename, const char** argv, const char** envp,
                  const StandardIO* stdio, bool inherit_signals) {
    StandardIO _stdio;
    if (stdio == (StandardIO*)0) {
        get_current_stdio(&_stdio);
        stdio = &_stdio;
    }

    return system_call5(EXECUTE_SYSCALL, (usize)filename, (usize)argv,
                        (usize)envp, (usize)stdio, inherit_signals);
}