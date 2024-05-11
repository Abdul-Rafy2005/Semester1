#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool isCircularPrime(int num);
int countDigits(int num);
bool isPrime(int num);

int main() {
    int range;
    printf("Enter the  number till you want to check circular numbers \n ");
    
	scanf("%d", &range);
int j,i,k;
    printf(" circular prime  nums are \n", range);
    for ( j=2;j<=range;++j) {
        if (isCircularPrime(j)) {
            printf("%d\n",j);
        }
    }

    return 0;//
}


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
 
	}   
    
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}
bool isCircularPrime(int num) {
    int numDigits = countDigits(num);
    int n = num;

    for (int i = 0; i < numDigits; ++i) {
        if (!isPrime(n)) {
            return false;
        }
        int lastDigit = n % 10;
        int div = n / 10;
        n = lastDigit * pow(10, numDigits - 1) + div;
    }
    return true;
}

