// 30) Prime Number Check Using a While Loop 


// 30) Prime Number Check Using a While Loop 


#include <stdio.h>

int isPrime(int n) {
    int i = 2;
    while (i < n / 2) {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main() {
    int num = 6;
    if(num==1)
        printf("neither prime nor composite");
    else if(isPrime(num))
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);

    return 0;
}