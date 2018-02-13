#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the number of minutes:");
    scanf("%d",&a);
    c=a/60;
    b=a%60;
    printf("%dHours %dMinutes",c,b);
}
