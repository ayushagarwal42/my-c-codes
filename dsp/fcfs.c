// c program to implement fcfs scheduling without arrival time

#include<stdio.h>
#include<conio.h>
# define max 30
void main()
{
    int i,j,n,bt[max],wt[max],tat[max];
    float awt=0,atat=0;
    //clrscr();
    printf("enter the no. of process");
    scanf("%d",&n);
    printf("enter the burst time of the process");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("process\t burst time\t waiting time\t turnaround time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("average waiting time =%f\n",awt);
    printf("average turnaround time =%f\n",atat);
    getch();
}