#include<stdio.h>
int main()
{
    int choise=1;
    while(choise==1)
    {   char c=NULL;
         int a=0,b=0,d=0;
      //  printf("first no\t");
        scanf("%d",&a);
        //printf("operator\t");
        scanf("%c",&c);
        switch (c)
        {
        case '+':
        //printf("second no");
        scanf("%d",&b);
            d=a+b;
            printf("%d\n",d);
            break;
        case '-': 
        //printf("second no");
        scanf("%d",&b);
            d=a-b;
            printf("%d\n",d);
            break;
        case '*':
        //printf("second no");
        scanf("%d",&b);
            d=a*b;
            printf("%d\n",d);
            break;
        case '/':
        //printf("second no");
        scanf("%d",&b);
            if(b==0)
            {
                printf("Error");
            }else{
                d=a/b;
                printf("%d\n",d);
                }
            break;
        case '%':
        //printf("second no");
        scanf("%d",&b);
            d=a%b;
            printf("%d\n",d);
            break;
        
        default:printf("unknown operator");
            break;
        }
        printf("Do you want to continue");
        scanf("%d",&choise);
    }
}
