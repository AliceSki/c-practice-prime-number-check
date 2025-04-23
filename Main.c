#include <stdio.h>
int main()
{
    int a,b,i,x;
    printf("Enter a number \n");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
       if(a%i == 0)
       {
          x=0;
       };
    }
    if(x==0)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}
    
