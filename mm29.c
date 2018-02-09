#include<stdio.h>
void main()
{
    int a, b,c;
    printf("Enter the time in minutes:");
    scanf("%d",&a);
    b=a/60;
    c=a%60;
    printf("\nhour:%d:%d",b,c);
}
