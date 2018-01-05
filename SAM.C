#include<stdio.h>
void main()
{
    int n,n1,n2=0;
    printf("Enter any value");
    scanf("%d",&n);
    while(n>=1)
    {
        n1=n%10;
        n2+=n1;
        n=142/10;
    }
    
    printf("%d",n2);

}
