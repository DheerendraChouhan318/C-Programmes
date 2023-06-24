#include<stdio.h>
int main()
{
    int n,i,*r;
    printf("enter the no. of elements in array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    r=a;
     int choise;
    printf(" enter the operation u wanna perform\n 1:Bubble sort\n 2:selection sort\n 3:insertion sort");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1: bubbleSort(r,n);
        break;
        case 2: selectionSort(r,n);
        break;
        case 3: insertionSort(r,n);
        break;
        default :printf("Enter correct option");
        break;
    }
   // return 1;
}
int bubbleSort(int*f,int g)
{ int temp=0;
for(int i=0;i<g;i++)
{
    printf("%d",f[i]);
}
    for (int i=0;i<g;i++)
    {
        for (int j=i+1;j<g;j++)
        if(f[j]<f[i])
        {
            temp=f[i];
            f[i]=f[j];
            f[j]=temp;
        }
    }
    printf("Array after bubble sort is");
    for(int i=0;i<g;i++){
        printf("%d",f[i]);
    }
    return 1;
}
int selectionSort(int *l,int g)
{  int temp1=0,min=0; 
    for (int i=0;i<g-1;i++)
    {   
        min=i;
        for (int j=i+1;j<g;j++)
        {
            if(l[j]<l[min])
            min=j;
        }
        if(min!=i)
        {
            temp1=l[i];
            l[i]=l[min];
            l[min]=temp1;
        }

   }
for (int i=0;i<g;i++)
{
    printf("%d\t",l[i]);
}
}

int insertionSort(int *k,int d)
{   int temp=0 ,j=0;
    for (int i=1;i<d;i++)
    {
            temp=k[i];
            int j=i-1;
        while(j>=0&&k[j]>temp)
        {   
            k[j+1]=k[j];
            j--;
        }
     k[j+1]=temp;
    }
for (int i=0;i<d;i++)
{
    printf("%d\t",k[i]);
}

}
