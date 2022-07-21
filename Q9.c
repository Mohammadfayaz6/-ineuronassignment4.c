#include<stdio.h>
int main()
{  
    int i,j=10,sum;
    printf(" cubes of first 10 natural numbers:\n");
    for(i=1;i<=j;i++)
    {
        sum=i*i*i;
        printf("\n%d",sum);
        
    }
    return 0;
}