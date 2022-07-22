// Program to print first N terms of Fibonacci series
#include <stdio.h>
int main(){
    int N, a = -1, b = 1, s = 0, i;
    printf("Enter no. of terms: ");
    scanf("%d", &N);
    for(i = 1; i <= N; ++i){
        s = a + b;
        a = b;
        b = s; 
        printf("%d ", s);
    }
    return 0;
}