#include<stdio.h>
#include<string.h>
int main()
{   int c;
   printf(" enter choise  \n 1 for reverse number \n 2 for reverse string  ");
   scanf("%d",&c);
    switch(c)
    {
    case 1:
    {  int n;
    printf("enter the no. to be reversed: ");
    scanf("%d",&n);
    n=reverseNumber(n);
     printf("reversed no. is %d",n);
     return 0;
    }
    break;
    case 2:
    {
        int z;
        printf("enter length of string");
        scanf("%d",&z);
        char a[z];
        printf(" enter the string to be reversed: ");
        for(int i=0;i<=z;i++)
        {
            scanf("%c",&a[i]);
        }
        revStr(a);
     /*   for(int i=0;i<=z;i++)
        {
            printf("%c",a[i]);
        }
*/
    }
    break;
    default: printf("please enter one of the two choise");
    break;
    }
}
int reverseNumber(int d)
{ int a=0,b;
 while(d!=0)
    {
        b=d%10;
        a=a*10+b;
        d/=10;
     }
     return a;
}
void revStr(char *p)
{
    int i,l=0,temp=0;
    l=strlen(p);
    printf("%d",l);
    for(int i=1;i<=l/2;i++)
     {
        temp=p[i];
        p[i]=p[l-i-1];
        p[l-i-1]=temp;
        
    }
    printf("%s",p);
        
}
