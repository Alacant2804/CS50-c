#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do //Size of the pyramid
    {
        height = get_int("Size: ");
    }
    while (height < 1 || height > 8);
// left side of the pyramid
    for (int row = 1; row <= height; row++)
    {
        for (int space = height - 1; space >= row; space--)
        {
            printf(" ");
        }
        for (int col = 1; col <= row; col++)
        {
            printf("#");
        }
        printf("  "); //space between the hashes

        for (int col = 1; col <= row; col++) //right side of the pyramid
        {
            printf("#");
        }
        printf("\n");
    }
}