//10. Check Divisible by 5 and 11
#include<stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num % 5 == 0 && num % 11 == 0)
        printf("Divisible by both 5 and 11");
    else
        printf("Not divisible by both");

}
