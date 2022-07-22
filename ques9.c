// Program to check whether a given number is Armstrong Number or Not
#include <stdio.h>
#include <math.h>
int main(){
    int n, i, temp, j, p, k, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    // Counting no. of digits in the given number

    for (i = 0; temp; ++i){
        temp /= 10;
    }

    temp = n;
    // check for Armstrong number

    while(temp){
        p = 1;
        j = (temp % 10);
        // Calculating ith power of last digits
        for(k = 1; k <= i; ++k){
            p *= j;
        }
        sum += p;
        temp /= 10;
    }

    if(sum == n){
        printf("%d is an Armstrong Number", n);
    }else{
        printf("%d is Not an Armstrong Number", n);
    }
    return 0;
}