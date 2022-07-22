// Program to print all prime numbers between two numbers
#include <stdio.h>
int main(){
    int a, b, i, max, min, x;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    min = (a < b) ? a : b;
    for(x = min + 1; x < max; ++x){
        for(i = 2; i < x; ++i){
            if(x % i == 0)
            break;
        }
        if(i == x){
            printf("%d ", x);
        }
    }
    return 0;
}