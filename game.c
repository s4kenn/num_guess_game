// To generate a random number between 0 to 100.
#include <stdio.h>
#include <stdlib.h> // library used to generate a random number.
#include <time.h>   // to manipulate time information.
// rand() produces a random number staring from 0.
int main()
{
    printf("Welcome to Guess the number game.\n");
    int num;
    // below line Initiliaze random number generator.
    srand(time(0));         // changes the random number after seconds.
    num = rand() % 100 + 1; // To generate a random number. We have used stdlib.h header file. || 1-100 ke beech me random number ho uske liye %100+1
    int guess = 0, gnum;
    do
    {
        printf("Enter the number ");
        scanf("%d", &gnum);
        if (num == gnum)
        {
            printf("Hola! You have guessed the correct number which is %d.\n", num);
            guess = guess + 1;
            printf("And you guessed the number in %d chances.\n", guess);
            break;
        }
        else if ((gnum < 0) || (gnum > 100))
        {
            printf("Enter a number between 0 to 100 only.\n");
            guess = guess + 1;
        }
        else if (num > gnum)
        {
            printf("Higher Number Please.\n");
            guess = guess + 1;
        }
        else
        {
            printf("Lower Number Please.\n");
            guess = guess + 1;
        }

    } while (11 > 10);

    return 0;
}
