#include<stdio.h>

int main(int argc, char *argv[])
{
    int a = 123;
    int b = 56789999;
    char str[4] = {'a', 'b', 'c', 'd' , 'e', 'f'};

    printf("This is going to fail... %s %d\n", str, b);
    return 0;
}
