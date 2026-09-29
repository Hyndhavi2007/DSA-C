#include<stdio.h>
int josephus(int n, int k){
    int result = 0;
    for(int i = 2; i<= n; i++){
        result = (result + k) % i;
    }
    return result + 1;
}
int main(){
    int n, k;
    printf("ENter  no of persons: ");
    scanf("%d", &n);
    printf("enter no of steps: ");
    scanf("%d", &k);
    printf("Survior is %d", josephus(n,k));
    return 0;
}