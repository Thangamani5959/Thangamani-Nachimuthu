#include<stdio.h>
int main()
{
int a,b;
scanf("%d",&a);
scanf("%d",&b);
if(a<b)
{
for(i=a;i<=b;i++)
{
if(i%2==1)
{
printf("%d",i);
}}}
else
{
for(i=b;i<=a;i++)
{
if(i%2==1)
{
printf("%d",i);
}}}
return 0;
}
