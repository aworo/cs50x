#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{


    string k = argv[1];   // k is the keyword entered as a CL argument
    if ( argc != 2  ) // Need to add condition for non-alpha check
    {
        printf("You should only have one alphaetical argument!\n");
        return 1;
    }
    else
    {
        string p = GetString();  //Prompt user for plaintext
        int keychar = 0;
        for (int i = 0, n = strlen(p); i < n; i++)
        {
            if ( isalpha( p[i] ) )  
            {
                if ( isupper( p[i] ) )

                {
                    if ((k[keychar % strlen(k)] + p[i]- 97) > 132 )
                    {
                        printf("%c", p[i] + k[keychar % strlen(k)] - 71);
                    }
                    else
                    {
                        printf("%c", p[i] + k[keychar % strlen(k)] - 97);
                    }    
                    keychar++;                    
                }
                    
                else
                {
                    printf("%c", p[i] + k[keychar % strlen(k)] - 97);
                    keychar++;
                }
            }
            
            else 
            {
                printf("%c", p[i]);
            }
        }    
    }
}
