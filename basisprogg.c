#include<stdio.h>
#include<math.h>
int main()
{    int c;
   printf("enter the question no.");
   scanf("%d",&c);
    switch(c)
    {
        case 1: sum();
        break;
        case 2: oddEven();
        break;
        case 3: factorial();
        break;
        case 4: sumNatural();
        break;
        case 5: fibSeries();
        break;
        case 6: binDec();
        break;
        case 7: strrev();
        break;
        case 8: stcomp();
        break;

        default: printf("wrong choise");
        break;
    }

    return 0;
}
int sum()
{
    int a,b;
    printf("enter Numbers for sum");
    scanf("%d %d",&a,&b);
    printf("sum of numbers are %d",a+b);
    return 0;
}
int oddEven()
{
    int a;
    printf("enter the numbers for odd even");
    scanf("%d",&a);
    if(a%2==0)
    printf("even number");
    else
    printf("odd number");
    return 0;
}
int factorial()
{
    int i=1,a,fact=1;
    printf("enter the no for factorial");
    scanf("%d",&a);
    while(i<=a)    
    {
            fact=fact*i;
            i++;
    }
    printf("factorial of number is %d",fact);
    return 0;

}
int sumNatural()
{
    int a,i=1,sum=0;
    printf("enter number upto which want sum");
    scanf("%d",&a);
    while(i<=a)
    {
        sum+=i;
        i++;
    }
    printf("sum of %d natural number is %d",a,sum);
}
int fibSeries()
{
    int a;
    printf("enter no for fib series");
    scanf("%d",&a);
    int i1=0 ,i2 =1, i3= i1+i2;
    printf("%d, %d,",i1,i2);
    while(i3<=a)
    {
    printf("%d,",i3);
    i1=i2;
    i2=i3;
    i3=i1+i2;
    }
    return 0;
}
int binDec()
{
    int a,r,d,i=0;
    printf("enter the binary no.");
    scanf("%d",&a);
    while(a!=0)
    { r=a%10;
        a/=10;
        d=d+r*pow(2,i);
        ++i;
    }
    printf("dec value of binary term is %d",d);
    return 0;
}
int strrev()
{   int a;
    printf("enter length of string ");
    scanf("%d",&a);
    char b[a], temp=0;
    printf("enter string ");
    for(int i=0;i<a;i++)
    {
        scanf("%c",&b[i]);
    }
    for(int i=0;i<=a/2;++i)
    {   temp=b[i];
        b[i]=b[a-i-1];
        b[a-i-1]=temp;
    }
    for(int i=0;i<=a;i++)
    {
        printf(" %c ",b[i]);
    }
    return 0;
}
int stcomp()
{

    int a,b;
     printf("enter length of string 1 ");
    scanf("%d",&a);
    printf("enter length of string 2 ");
    scanf("%d",&b);
   /* printf("hi");*/
    if(a==b)
    {
         char c[a],d[b];
         int i,f=0;
        printf("enter first  string ");
        for(i=0;i<a;i++)
        {
            scanf("%c",&c[i]);
        }
    
        printf("enter second string ");
        for(i=0;i<b;i++)
        {
            scanf("%c",&d[i]);
        }
        for(i=0;i<=a;i++)
        {
            if(c[i]==d[i])
            {
                f==1;
                
            }
        }
        if(f==1)
        {
            printf("strings match");
        }else
            {
                printf("strings does not matach");
            }
        
    }else
    {
     printf("lentgh of string does not match");   

    }

return 0;
}
