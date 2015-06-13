#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int global1 = 34567;
int global2 = 123567;

int main(int argc, char *argv[])
{
    int a = 123;
    int b = 56789999;
    char* dest = NULL;
    char src[3];
    int local1 = 234;
    int local2 = 123456;

    strcpy(src, "test string.....a really really really long string......");
    printf("The src string is \'%s\'\n", src);
    printf("Local1 is %d, local2 is %d, global1 is %d, global2 is %d\n", local1, local2, global1, global2);
    printf("Just printing some text\n");
    
    return 0;
}
