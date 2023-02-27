#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    srand(time(NULL)); // initialize the random number generator with the current time

    // generate a random password
    char password[PASSWORD_LENGTH + 1];
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        // generate a random uppercase letter or digit
        char c;
        do {
            c = rand() % ('z' - 'A') + 'A';
        } while (c >= 'a' && c <= 'z');
        password[i] = c;
    }
    password[PASSWORD_LENGTH] = '\0'; // add a null terminator to the end of the string

    // print the password
    printf("%s\n", password);

    return 0;
}

