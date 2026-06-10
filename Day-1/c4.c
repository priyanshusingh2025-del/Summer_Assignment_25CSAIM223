#include <stdio.h>


int main() {
     long int num, count = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

        while (num > 0) {
            num = num / 10;  
            count++;         
        }
    

    printf("Number of digits: %ld\n", count);

    return 0;
}
