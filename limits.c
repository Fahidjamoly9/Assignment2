#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit limit;

    // Maximum stack size
    getrlimit(RLIMIT_STACK, &limit);
    printf("Maximum Stack Size: %ld bytes\n", limit.rlim_cur);

    // Maximum number of processes
    getrlimit(RLIMIT_NPROC, &limit);
    printf("Maximum Number of Processes: %ld\n", limit.rlim_cur);

    // Maximum number of file descriptors
    getrlimit(RLIMIT_NOFILE, &limit);
    printf("Maximum Number of File Descriptors: %ld\n", limit.rlim_cur);

    return 0;
}

