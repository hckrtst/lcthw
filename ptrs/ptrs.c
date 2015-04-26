#include<stdio.h>

int main(int argc, char *argv[])
{
   int ages[] = {23, 11, 36, 56,1,10,5,16};
   char *names[] = {"Buddy", "Mickey"/*, "Amanda", "Vanessa", "Margaret", "Mona"*/};

   printf("Size of ages = %d, size of names = %d size of &ages = %d \n", sizeof(ages), sizeof(names), sizeof(&ages));
    return 0;
}
