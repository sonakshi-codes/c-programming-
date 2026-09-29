#include <stdio.h>
int main() {
   char operation;
    int num1,num2;
    printf("Input Number 1 = ");
    scanf("%d",&num1);
    printf("Input Number 2 = ");
    scanf("%d",&num2);
    printf("Operation (+,-,*,/) = ");
    scanf(" %c",&operation);
    if (operation=='+'){
        printf("Result = %d",num1+num2);
    }
    else if (operation=='-'){
        printf("Result = %d",num1-num2);
        
    }
    else if (operation=='*'){
        printf("Result = %d",num1*num2);
    }
    else if (operation == '/') {
    printf("Result = %d", num1 / num2);
    }
    else {
    printf("Invalid operation");
    }
    return 0 ; 
}
  
