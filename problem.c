#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("%s\n")

    int number;
    number = get_int("What's your age?\n ");
    if (number < 20)
    {
        printf("You are too young\n");
    }
    else if (number >= 20 || number <= 40)
    {
        printf("We need you in our team");
    }
}