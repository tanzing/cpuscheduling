#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    //arrival time is zero
    float arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }

    int wait[n],turn[n];

    wait[0] = 0;

    for(int i=1;i<n;i++)
    {
        wait[i] = arr[i-1] + wait[i-1];
    }

    for(int i=0;i<n;i++)
    {
        turn[i] = wait[i] + arr[i];
    }


    printf("Waiting Time\t\tTurnAroundTime\n\n");
    

    for(int i=0;i<n;i++)
    {
        printf("%d\t\t\t%d\n",wait[i],turn[i]);
    } 

 


    return 0;
}