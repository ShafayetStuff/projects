#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1;
    double num2;
    char oper;

    printf("Enter a Number: ");
    scanf("%lf", & num1);
    
    printf ("Enter a oper: ");
    scanf ("%s", & oper);
    
    printf("Enter a Number: ");
    scanf("%lf", & num2);
    
    if  (oper == '+'){
        printf ("%f",num1 + num2);
    }
    else if  (oper == '-'){
        printf ("%f", num1-num2);
    }
    else if  (oper == '*'){
        printf ("%f", num1 * num2);
    }
    else if  (oper == '/'){
        printf ("%f", num1 / num2);
    }
    else {
        printf ("Invalid opererator");
    }
    return 0;
}