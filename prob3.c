#include <stdio.h>

int main(){

    int n1, n2 = 0;

    printf("ENTER the numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("First number is %d:\n", n1);
    printf("Second number is %d:\n", n2);


    n1= n1 + n2;
    n2= n1 - n2;
    n1= n1 - n2;

    printf("After Swipping First number is %d:\n", n1);
    printf("After swipping Second number is %d:\n", n2);

    return 0;
}