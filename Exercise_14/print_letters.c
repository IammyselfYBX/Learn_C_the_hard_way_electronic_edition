#include "function.h"
void print_letters(char arg[])
{
    int i = 0;

    for(i = 0; arg[i] != '\0'; i++)
    {
        char ch = arg[i];

        if(can_print_it(ch)){
            printf("'%c' == %d", ch,ch);
        }
    }
    printf("\n-----------------------------\n");
}