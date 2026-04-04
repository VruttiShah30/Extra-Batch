//Even to Odd using Conditional Operator
#include<stdio.h>

main(){
    int num, result;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    result = (num % 2 == 0) ? num + 1 : num;
    
    printf("Result = %d", result);
    
}
