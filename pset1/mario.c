#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    
    do 
    {
        printf("Enter a number of rows between 0 and 23 inclusive: ");
        x = GetInt();
    }
    while (x < 0 || x > 23);
    
   for (int i = 0; i < x; i++)
   {
        for (int j = 0; j < (x-i-1); j++)
        { 
            printf(" ");
        
        }

        for (int k = 0; k < (i + 2); k++)
        { 
            printf("#");
        
        }
        
        printf("\n");
;
   
   
   }       
   
}
