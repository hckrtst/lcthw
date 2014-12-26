#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[]={12, 20, 14};
    char name[]="Hckrtst";
    char full_name[]={'h',
        'c','k','r','t', '\0'}; // Try removing this \0 and run with valgrind

    printf("Size of int is %d\n", sizeof(int));
    printf("Num of ints in areas is %d\n", sizeof(areas)/sizeof(int));
    
    printf("Size of areas %ld\n", sizeof(areas));
    printf("Size of name %ld\n", sizeof(name));
    printf("Size of full_name %ld\n", sizeof(full_name));
    return 0;
}   
