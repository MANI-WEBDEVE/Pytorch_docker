#include <stdio.h>

int main() {
    int num, temp, sum = 0, rem, digits = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Bonus: Count digits
    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    if (digits < 3) {
        printf("error\n");
        return 0;
    }
    
    // Calculate sum of cubes
    temp = num;
    while (temp > 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    
    if (sum == num) {
        printf("Number is Armstrong\n");
        temp = num;
        int arr[3];
        int i = 0;
        while (temp > 0) {
            arr[i++] = temp % 10;
            temp /= 10;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d\n", arr[j]);
        }
    }
    
    return 0;
}