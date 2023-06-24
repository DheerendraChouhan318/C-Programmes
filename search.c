#include<stdio.h>
#include<math.h>
int main()
{     int n=0;
    printf("enter the number of elements for array\n");
    scanf("%d",&n);
    int a[n];
    printf("\n enter value in array");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int choise=0;
    printf("enter choise \t 1:Linear Search\n 2:Binary Search ");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1: linearSearch(a,n);
        break;
        case 2:binarySearch(a,n);
        break;
    }
}

int linearSearch(int *p,int d)
{
    int q;
    printf("enter the element to be searched");
    scanf("%d",&q);
    for(int i=0;i<d;i++)
    {
        if(p[i]==q)
        {
            printf("element %d is found at %d",q,i+1);
            break;
        }
        else{
            printf("Element not found");
            break;
        }
    }
    return 1;
}
int binarySearch(int *r,int p)
{ int temp;
    for (int i=0;i<p;i++)
    {
        for (int j=i+1;j<p;j++)
        if(r[j]<r[i])
        {
            temp=r[i];
            r[i]=r[j];
            r[j]=temp;
        }
    }
    int low=0,high=p-1,s,mid=0,pos=0;
    printf("\n enter the element to be searched");
    scanf("%d",&s);
    while(low<=high)
    {
        mid=floor((low+high)/2);
        if(r[mid]==s)
        {      pos=mid;
            printf("element is found at pos %d",pos);
            break;
        }else if(r[mid]>s)
        {
            low=mid+1;
        }else if(r[mid]<s)
        {
            high=mid-1;
        }else
        {
            pos=-1;
        }
    }
    if(pos==-1)
    {
        printf("element is not in the list");
    }
 return 1;   
}