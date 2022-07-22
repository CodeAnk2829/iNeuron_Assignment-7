// Program to print all prime numbers under 100
#include <stdio.h>
int main(){
    int x, i;
    for(x = 2 ; x < 100 ; ++x){
        for(i = 2 ; i < x ; ++i){
            if(x % i == 0)
            break;
        }
        if(i == x){
            printf("%d ", x);
        }
    }
    return 0;
}