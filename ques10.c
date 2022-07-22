// Program to print all Armstrong number between 1 to 1000
#include <stdio.h>
int main()
{
    int n, i, j, k, temp, p, t, sum;
    for (n = 1; n <= 1000; ++n)
    {
        sum = 0;
        temp = n;

        // Counting of digits

        for (i = 0; temp; ++i){
            temp /= 10;
        }

        temp = n;

        // check for Armstrong number

        for(temp = n; temp; temp /= 10){
            p = 1;
            j = (temp % 10);
            // Calculating ith power of last digits
            for (k = 1; k <= i; ++k){
                p *= j;
            }
            sum += p;
        }

        if (sum == n){
            printf("%d ", sum);
        }
    }
    return 0;
}