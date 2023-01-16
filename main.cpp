#include "mbed.h"

int main() {

    int numbers[] = {1,3,5,7,9};

    numbers[0] = 11;
    numbers[3] = 42;

    for (int i = 0; i < 5; ++i) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    while (true) {
        sleep();
    }
}
