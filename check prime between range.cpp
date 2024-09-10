#include <stdio.h>
#include <stdbool.h>

int main() {
    int start, end;

    // Input the range from the user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);

    // Iterate through each number in the range
    for (int num = start; num <= end; num++) {
        if (num <= 1) {
            continue; // 0 and 1 are not prime numbers
        }
        
        bool is_prime = true;

        // Check if the number is prime
        for (int i = 2; i <=num/2; i++) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", num);
        }
    }

    return 0;
}

