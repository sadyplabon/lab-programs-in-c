#include<stdio.h>
int main()
{
    int bt[20],p[20],wt[20],tat[20],i,j,n,pos,temp,rem_bt[20],qt=0,tat1=0,count=0;
    float avg_wt=0,avg_tat=0;
    printf("Name: Sady Al Mahedy\t\tID: 181030101030\n\n");
    printf("Enter number of process: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter burst time for Process%d : ",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;

    }
    printf("\nEnter quantum time : ");
    scanf("%d",&qt);


    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }

        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;

        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
        rem_bt[i]=bt[i];
    }


    printf("\nGantt Chart\n");
    printf("0_|");
    while(1)
    {
        for(i=0,count=0;i<=n;i++)
        {
            temp=qt;
            if(rem_bt[i]==0)
            {
                count++;
                continue;
            }
            if(rem_bt[i]>qt)
                rem_bt[i]=rem_bt[i]-qt;
            else
                if(rem_bt[i]>=0)
            {
                temp=rem_bt[i];
                rem_bt[i]=0;
            }
            tat1=tat1+temp;
            tat[i]=tat1;
            printf("_P%d_%d_|",p[i],tat1);
        }
        if(n==count)
            break;
    }

    printf("\n\nProcess\t\tBurst Time\t\tTurnaround Time\t\tWaiting Time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=tat[i]-bt[i];
        avg_wt+=wt[i];
        avg_tat+=tat[i];
        printf("Process %d\t\t%d\t\t%d\t\t\t%d\n",p[i],bt[i],tat[i],wt[i]);
    }

    avg_wt=avg_wt/n;
    avg_tat=avg_tat/n;
    printf("\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f\n",avg_tat);
    return 0;
}
