#include<stdio.h>
int main(){
    //FCFS - First COme First Serve
    int n;
    int bt[20],wt[20],tat[20];
    float avg_wt =0;
    float avg_tat= 0;
    printf("Enter number of process: ");
    scanf("%d",&n);
    // burst time 
    for(int i =0;i<n;i++){
        printf("P%d: ",i+1);
        scanf("%d",&bt[i]);
    }
    // calculating waiting time
    wt[0]=0;
    for(int i =0;i<n;i++){
        wt[i] = wt[i-1] + bt[i-1];
    }
    // calculating turn around time
    for(int i =0;i<n;i++){
        tat[i] = wt[i] +bt[i];
    }
    for(int i =0;i<n;i++){
        avg_wt = avg_wt+wt[i];
        avg_tat= avg_tat+tat[i];
    }
    avg_wt = avg_wt/n;
    avg_tat = avg_tat/n;
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(int i =0;i<n;i++){
        printf("\nP%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    printf("Average Waiting Time: %.2f\n", avg_wt);
    printf("Average Turnaround Time: %.2f\n",avg_tat);
    printf("\n Execution FCFS Order");
    for(int i =0;i<n;i++){
        printf("P%d",i+1);
        if(i<n-1){
            printf("->");
        }
    }
    printf("\n");
    return 0;

}