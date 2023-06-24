#include<stdio.h>
int main()
{
    int n,c;
    printf("enter the number to be performed operation: ");
    scanf("%d",&n);
    printf("enter the choise \n 1:PALLINDROM \n 2:ARMSTRONG \n 3:Prime  ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {   int b,p=0;
          while(n!=0)
        {
        b=n%10;
        p=p*10+b;
        n/=10;
        }
        if(n==p)
        printf("Palllindrom Number");
        else
        printf("Not Pallindrom Number");
     }
        break;
        case 2:
        {
            int a=0,r;
            while(n!=0)
            {
                r=n%10;
                a+=r*r*r;
                n/=10;
            }
            if(a==n)
            printf("Armstrong number");
            else 
            printf("Not armstrong ");
        }
        break;
        case 3:
        {   int p;
         if (n==0||n==1)
          p=1;
        
        for(int i=2;i<=n;++i)
        {
            if(n%i==0)
            p=1;
            break;
        }
        if(p==1)
        printf(" not prime");
        else 
        printf(" Prime Number");
        }
        break;

        default: printf("Enter from above options");
        break;
    }

    return 0;
}
