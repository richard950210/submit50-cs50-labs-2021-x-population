#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int sizeL, lastL, totalL;
    int year =0;

    // TODO: Prompt for start size
        do
        {
         sizeL = get_int("Please enter population size:\n");
         totalL = sizeL;
        }
        while (sizeL < 9);

    // TODO: Prompt for end size
        do
        {
            lastL = get_int("enter end population size:\n");
        }
         while (lastL < sizeL);

    // TODO: Calculate number of years until we reach threshold
        do
        {
         sizeL = sizeL + (sizeL/3) - (sizeL/4);
         year = year + 1;
        }
        while (sizeL < lastL);

    // TODO: Print number of years
             do
             {
                    printf("Start Size = %i \n", totalL);
                    printf("End Size = %i \n", lastL);
                    printf("Years: %i \n", year);
             }
             while (sizeL > lastL);

}
