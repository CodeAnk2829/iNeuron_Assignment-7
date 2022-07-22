// Program to check whether a given number is there in the Fibonacci series or not
#include <stdio.h>
int main(){
    int n, a = -1, b = 1, s = 0, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(s <= n){
        s = a + b;
        a = b;
        b = s;
        if(s == n){
            printf("%d is there in the Fibonacci series", n);
            break;
        }
    }
    if(s > n){
        printf("%d is not there in the Fibonacci series", n);
    }
    return 0;
}