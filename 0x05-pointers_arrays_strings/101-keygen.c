#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
    int sum = 0, i = 0, r;
    char password[100];

    srand(time(NULL)); /* Seed random number generator */

    while (sum < 2772 - 122) /* Total sum of password must be 2772 */
    {
        r = rand() % 62; /* Generate random number between 0 and 61 */
        if (r < 26) /* If r is between 0 and 25, add lowercase letter to password */
            password[i] = 'a' + r;
        else if (r < 52) /* If r is between 26 and 51, add uppercase letter to password */
            password[i] = 'A' + (r - 26);
        else /* If r is between 52 and 61, add digit to password */
            password[i] = '0' + (r - 52);
        sum += password[i++]; /* Add ASCII value of character to sum */
    }

    password[i] = 2772 - sum - 1; /* Calculate last character of password */

    printf("%s\n", password); /* Print password */

    return (0);
}
