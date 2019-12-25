#include "function.h"
void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for(i = 1; i < argc; i++)
    {
        print_letters(argv[i]);
    }
}