// Program to find next prime number
#include <stdio.h>
int main(){
    int N, i, x;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(x = N + 1; x < N + 7; x++){
        for(i = 2; i < x; ++i){
            if(x % i == 0)
            break;
        }
        if(i == x){
            printf("Next Prime Number: %d", x);
            break;
        }
    }
    return 0;
}