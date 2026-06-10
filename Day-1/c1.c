#include <stdio.h>
int main(){
    int num,i,sum=0;
    printf("Enter the number of terms:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("The sum is:%d",sum);
    return 0;
}