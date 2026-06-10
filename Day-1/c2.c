#include<stdio.h>
int main(){
    int num,i,pro;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        pro=num*i;
        printf("%d*%d=%d\n",num,i,pro);
    }
    return 0;
    
}