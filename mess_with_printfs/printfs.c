#include <stdio.h>

int main(int argc, char* argv[])
{
    // This generates a seg fault
    printf("The number is %s\n", 67);
    return 0;
}
