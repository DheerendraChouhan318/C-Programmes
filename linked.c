#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;

};
int main()
{
    struct node *head=NULL,*cur=NULL,*new=NULL;
    int choise=1;
    while(choise)
    {
        new=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            head=new;
            cur=new;
        }else
        {
            cur->link=new;
            cur=new;
        }new->link=NULL;
    }
    printf("enter the data");
    scanf("%d",&new->data);

    return 1;
}