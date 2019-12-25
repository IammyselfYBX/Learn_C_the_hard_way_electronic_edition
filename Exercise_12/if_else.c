/*
    If,Else If,Else
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
    int i = 0;
    if(argc == 1)
    {
        printf("You only have one argument\n");
    }else if(argc > 1 && argc < 4){
        printf("Here is your arguments:\n");
        for(i = 0; i < argc; i++)
        {
            printf("agrv %d: %s\n",i+1, argv[i]);
        }
    }else{
        printf("You have too many atguments\n");
    }

    return 0;
}