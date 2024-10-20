#include <stdio.h>
#include "solution.c"

void run_tests() {
    // Define your test cases here
    int result = halloween_function(1,1);
    if (result == 2) {
        printf("22666633\n");  // Example T9 code for "BONE"
    } else {
        printf("Incorrect. Try again!\n");
    }
}

int main() {
    run_tests();
    return 0;
}