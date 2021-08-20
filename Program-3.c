//Input: 10 30
//Output: 40
#include<stdio.h>
struct sum
{
int a;
int b;
};
int main()
{
int sum1;
struct sum s;
printf("Enter two numbers:");
scanf("%d%d",&s.a,&s.b);
sum1 =s.a+s.b;
//compute sum
printf("Sum=%d",sum1);
}


