#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float x;
    do
    {   
        printf("How much change should you receive? ");
        x = GetFloat();
    }
    while (x < 0);
    
    x = x * 100;
    x = round(x);
    int cents = x;
    int running = cents;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    do 
    {
        running = running - 25;
        quarters++;
    }
    while (running >= 25);

   do 
    {
        running = running - 10;
        dimes++;
    }
    while (running >= 10);

   do 
    {
        running = running - 5;
        nickels++;
    }
    while (running >= 5);

   do 
    {
        running = running - 1;
        pennies++;
    }
    while (running >= 1);






printf("%d\n",quarters+dimes+nickels+pennies);




}
    
