#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>



int main(int argc, string argv[])
{

    if (( argc != 2  ) || ( atoi(argv[1]) < 0 ))
    {
        printf("You should only have one argument!\n");
        return 1;
    }
    else
    {
        int k = atoi(argv[1]);
        k = k % 26;
//      printf("Enter a word: ");           
        string p = GetString();
        for (int i = 0, n = strlen(p); i < n; i++)
        {
            if ( isalpha( p[i] ) )
            {
                if ( isupper( p[i] ) )

                {
                    
                    if ((p[i] + k) > 90)
                    {
                        
                        printf("%c", toupper(p[i]+ k - 26));
                    }
                    else
                    {
                    printf("%c", toupper(p[i]+ k));
                    }
                }             
                else
                {
                    if ((p[i] + k) > 122)
                    {
                        printf("%c", (p[i] + k - 26));
                    }
                    else
                    {
                    printf("%c", (p[i] + k));                    
                    }
                }
                
            }
            else 
            {
                printf("%c", p[i]);
            }

        }
                printf("\n");
    }
}

//Be sure to drink your Ovaltine!
//Or fher gb qevax lbhe Binygvar!
