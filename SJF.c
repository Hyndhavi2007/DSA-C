#include<stdio.h>
// SJF - short job first
int main(){
    int n;
    int bt[20], wt[20],tat[20],p[20];
    float avg_wt = 0;
    float avg_tat = 0;
    int temp;
    printf("Enter number of process: ");
    scanf("%d",&n);
    printf("Enter burst time for each process\n");
    for(int i =0;i<n;i++){
        p[i] = i+1;
        printf("P%d: ",p[i]);
        scanf("%d",&bt[i]);
    }
    //sort according to burst time
    for(int i =1;i<n-1;i++){
        for(int j =0;j<n;j++){
            if(bt[i]>bt[j]){
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
                //swap process numbers
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    wt[0] = 0;
    for(int i =0;i<n;i++){
        wt[i] = wt[i-1]+bt[i-1];
    }
    for(int i =0;i<n;i++){
        tat[i] = wt[i] +bt[i];
    }
    for(int i =0;i<n;i++){
        avg_wt = avg_wt+wt[i];
        avg_tat = avg_tat+tat[i];
    }
    avg_wt = avg_wt/n;
    avg_tat = avg_tat/n;
    printf("\nProcess\tBurst Time\t Waiting Time\tTurnaround Time\n");
    for(int i =0;i<n;i++){
        printf("\nP%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
    printf("Average Wait time is %.2f\n",avg_wt);
    printf("Average turn around time is %.2f",avg_tat);
    printf("Execution Order:");
    for(int i =0;i<n;i++){
        printf("P%d",p[i]);
        if(i<n-1){
            printf("->");
        }
    }
    printf("\n");
    return 0;
}