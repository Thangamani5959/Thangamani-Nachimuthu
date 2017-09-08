#include<stdio.h>
void main()
{
int a,b=0;
scanf("%d",&a);
while(a!=0)
{
b=a%10;
b=b*b*b;
a=a/10;
}
if(a==b)
{
printf("armstrong);
}
else
{
printf("not armstrong");
}
}
