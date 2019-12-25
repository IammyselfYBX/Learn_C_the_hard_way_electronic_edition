/*
    While循环和布尔表达式
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
    int i = 0;
    while(i < argc)
    {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }

    //let't make our own array of atrings
    char *states[] = {  //这样的话,一共4个指针
        "Beijing", "Changchun",
        "tianjing", "Shanghai"
    };

    int num_states = 4;
    i = 0;  //watch for this
    while(i < num_states){
        printf("state %d: %s\n",i, states[i]);
        i++;
    }

    return 0;
}