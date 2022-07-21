#include<stdio.h>
int main()
{  
    int i,j=1;
    printf("first 10 odd numbers in reverse:\n");
    for(i=20;i>=j;i--)
    {   
        if(i%2==1)
        printf("\n%d",i);
    }
    return 0;
}