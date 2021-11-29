#include <stdio.h>
#include<stdlib.h>

typedef struct Priority
{
    int priority;
    int burst;   
}p;

int compare(const void *a,const void *b)
{
    p *p1 = (p*)a;
    p *p2 = (p*)b;

    return p1->priority-p2->priority;
}

int main()
{

    int n;
    scanf("%d",&n);
    

    p arr[n];
    printf("Enter the burst time and priority of all process");
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&arr[i].burst,&arr[i].priority);
    }

    qsort(arr,n,sizeof(p),compare);
    printf("Burst Time\t\tPriority\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t\t%d\n",arr[i].burst,arr[i].priority);
    }





}