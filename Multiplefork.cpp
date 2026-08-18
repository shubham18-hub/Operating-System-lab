#include <stdio.h>
#include <unistd.h>

int main() {
    // Evaluation follows short-circuit logical operations
    if (fork() && fork() || fork()) {
        printf("Hello ");
    } else {
        printf("Hi ");
    }
    printf("\n");
    return 0;
}
