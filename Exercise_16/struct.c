/*
    结构体和指向它们的指针
*/
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person{  //like class in OOP language 
    char *name;
    int age;
    int height;
    int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);    //abort the program if assertion is false确保malloc得到一块有效的内存

    who ->name = strdup(name);  //duplicate a string
    who ->age = age;
    who ->height = height;
    who ->weight = weight;

    return who;
}

void Person_destory(struct Person *who)
{
    assert(who != NULL);

    free(who->name);
    free(who);
}
/*  不想显式释放内存又能避免内存泄露的办法是引入 libGC 库。
    你需要把所有的 malloc 换成 GC_malloc ,然后把所有的 free 删掉。
 */
void Person_print(struct Person *who)
{
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n",who->age);
    printf("\tHeight: %dcm\n", who->height);
    printf("\tWeight: %dkg\n", who->weight);
}

int main(int argc, char *argv[])
{
    struct Person *Tom = Person_create("Tom", 22, 167, 67);
    struct Person *Jerry = Person_create("Jerry", 54, 189, 54);
    printf("Tom is at memory location %p\n", Tom);
    Person_print(Tom);
    printf("Jerry is at memory location %p\n", Jerry);
    Person_print(Jerry);
    printf("--------------------------------------------------------------\n");
    printf("**********************   change  ****************************\n");
    printf("---------------------------------------------------------------\n");
    Tom ->age += 20;
    Tom ->height +=23;
    Tom->weight -=30;
    Person_print(Tom);
    Jerry->age += 20;
    Jerry ->height +=23;
    Jerry->weight -=30;
    Person_print(Jerry);

    Person_destory(Tom);
    Person_destory(Jerry);

    return 0;
}