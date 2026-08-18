#include <stdio.h>
#include <unistd.h>

int main() {
    if (fork()) {
        // Parent Process (fork() returns PID > 0)
        printf("Hello ");
    } else {
        // Child Process (fork() returns 0)
        printf("Hi\n");
    }
    return 0;
}
