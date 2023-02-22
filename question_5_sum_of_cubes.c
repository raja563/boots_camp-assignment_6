//WAP to calculate sum of cubes of first N natural numbers.
#include<stdio.h>
main()
{
    int i,cube=0,sum=0;
    for(i=1;i<30;i++)
    {
         cube=i*i*i;
         sum=sum+cube;

         printf(" value:%7d  cube : %7d   and sum:    %7d\n",i,cube,sum);
    }
    getch();
    return 0;

}
