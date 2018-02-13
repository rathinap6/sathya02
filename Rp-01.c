#include <stdio.h>
void main() 
{
int n,a[10],t=0,j,i;
printf("Enter the number of terms:");
scanf("%d",&n);
printf("Enter the terms:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
if(n%2==0)
{
printf("%d\n",(a[n/2]+a[(n/2)-1])/2);
}
else
{
printf("%d\n",a[(n-1)/2]);
}
}
