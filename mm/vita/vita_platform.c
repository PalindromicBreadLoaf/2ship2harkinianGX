// PS Vita platform glue.
#include <vitaGL.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>

// This looks like a good number. I don't really know what I'm doing.
unsigned int _newlib_heap_size_user = 192 * 1024 * 1024;

// TODO: Actually do this? Should work fine without.
void glDetachShader(GLuint program, GLuint shader) {
    (void)program;
    (void)shader;
}

pid_t waitpid(pid_t pid, int* status, int options) {
    (void)pid;
    (void)status;
    (void)options;
    errno = ENOSYS;
    return -1;
}

int execvp(const char* file, char* const argv[]) {
    (void)file;
    (void)argv;
    errno = ENOSYS;
    return -1;
}

int execl(const char* path, const char* arg, ...) {
    (void)path;
    (void)arg;
    errno = ENOSYS;
    return -1;
}
