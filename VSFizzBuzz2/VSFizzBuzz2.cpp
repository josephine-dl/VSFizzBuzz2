// VSFizzBuzz2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#define FIZZ "Fizz"
#define BUZZ "Buzz"

int main(void) {
    for (int i = 1; i <= 100; i++) {
        if (i % 15 == 0) {
            printf("%s%s\n", FIZZ, BUZZ);
        }
        else if (i % 3 == 0) {
            printf("%s\n", FIZZ);
        }
        else if (i % 5 == 0) {
            printf("%s\n", BUZZ);
        }
        else {
            printf("%d\n", i);
        }

    }
    return EXIT_SUCCESS;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
