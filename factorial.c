#include <stdio.h>
#include <time.h>

double factorial(double n) {
    return (n != 1) ? n * factorial(n - 1) : 1;
}

int main(int argc, char *argv[]) {
    clock_t start, end;
    double elapsed;

    start = clock();
    for (int i = 0; i < 10000000; i++) {
        factorial(500);
    }
    end = clock();
    elapsed = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("Elapsed time %lf\n", elapsed);

    return 0;
}
