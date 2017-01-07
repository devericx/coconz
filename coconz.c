#include <stdio.h>
#include <stdlib.h>

int coconz(int n);

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: %s [integer > 1]\n", argv[0]);
        exit(0);
    }

    int n = coconz(atoi(argv[1]));

    printf("It took %d times for your number to reach 1.\n", n);
}

int coconz(int n) {
    int count = 0;

    int number = n;

    while (number != 1) {
        if (number % 2 == 0) {
            number /= 2;
            count++;
        }

        else {
            number = number * 3 + 1;
            count++;
        }
    }

    return count;
}
