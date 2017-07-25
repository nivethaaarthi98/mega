#include<stdio.h>
int main()
{
int n,reversed number=0,remainder;
printf("enter an integer:");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
reversednumber=reversednumber*10+remainder;
n/=10;
}
printf("reversed number=%d",reversed number);
return 0;
}
