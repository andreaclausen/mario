#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    int hash = 2;
    
    // get user input
    do
    {
        printf("Height:");
        height = GetInt();
    }
    while (height < 0 || height > 23);

    // print pyramid
    for (int i = 0; i < height; i++)
    {
        
        // print spaces
        for (int k = 0; k < height + 1 - hash; k++)
        {
        printf(" ");
        }
        
        // print hashes
        for (int j = 0; j < hash; j++)
        {
        printf("#");
        }
        
        // next line
        printf("\n");
        hash++;      
    }
}
