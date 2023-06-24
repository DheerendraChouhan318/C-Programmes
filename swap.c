#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("enter first no.");
    scanf("%d",&a);
    printf("enter second no");
    scanf("%d",&b);
      c=a;
      a=b;
      b=c;

      printf(" reversed no are %d %d",a,b);
    
}