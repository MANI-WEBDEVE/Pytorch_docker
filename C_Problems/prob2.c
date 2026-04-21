#include <stdio.h>

int main() {
    int num, sum = 0, temp, rem;
    
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);
    
    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    printf("Sum is %d\n", sum);
    if (sum % 2 != 0) {
        printf("Sum is odd\n");
        printf("%d\n", sum * sum);
    } else {
        printf("Sum is even\n");
        printf("%d\n", sum * sum * sum);
    }
    
    return 0;
}