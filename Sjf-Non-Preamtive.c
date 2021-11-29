#include <stdio.h>
#include<stdlib.h>

typedef struct Priority
{
    int burst;   
}p;

int compare(const void *a,const void *b)
{
    p *p1 = (p*)a;
    p *p2 = (p*)b;

    return p1->burst-p2->burst;
}

int main()
{

    int n;
    scanf("%d",&n);
    

    p arr[n];
    printf("Enter the burst time");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i].burst);
    }

    qsort(arr,n,sizeof(p),compare);

       int wait[n], turn[n];

    wait[0] = 0;

    for (int i = 1; i < n; i++)
    {
        wait[i] = arr[i].burst + wait[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        turn[i] = wait[i] + arr[i].burst;
    }

    printf("Processes\t\tBurst Time\t\tWaiting Time\t\tTurnAroundTime\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("P%d\t\t\t%d\t\t\t%d\t\t\t%d\n", i + 1,arr[i].burst, wait[i], turn[i]);
    }



}