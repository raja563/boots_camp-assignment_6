//WAP to calculate sum of first N even natural numbers.
#include<stdio.h>
main()
{
    int i,sum=0;
    for(i=1;i<10;i++)
    {
            if(i%2==0)
            {
                sum=sum+i;
                printf("%d and sum of numbers is %d\n",i,sum);
            }

    }
    getch();
    return 0;

}
