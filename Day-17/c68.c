#include <stdio.h>

int main() {
    int a[6]={1,2,3,4,5,6}, b[5]={4,5,6,7,8}, c[4]={2,4,6,8};
    printf("Common Elements: ");
    for(int i=0;i<6;i++) {
        for(int j=0;j<5;j++) {
            if(a[i]==b[j]) {
                for(int k=0;k<4;k++) {
                    if(a[i]==c[k]) {
                        printf("%d ",a[i]);
                    }
                }
            }
        }
    }
    return 0;
}
