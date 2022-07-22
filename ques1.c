// Program to find the Nth term of Fibonacci series
#include <stdio.h>
int main(){
    int N, a = -1, b = 1, s = 0, count;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(count = 0; count != N; ++count){
        s = a + b;
        a = b;
        b = s;
    }
    printf("%dth term of the Fibonacci series: %d", N, s);
    return 0;
}