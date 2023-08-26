#include<stdio.h>
int main(){
    // arithmatic operator 
    int a,b;
    a = 34 ;
    b = 45;
    printf("Addition of a and b is %d\n",a+b);
    printf("Subtraction of a and b is: %d\n",a-b);
    printf("Multiplication of a and b is %d\n", a*b);
    printf("Division of a and b is %f\n", a/b);
    printf("Modulo of a and b is: %d\n",a%b);

    // Logical Operator 
    int r,t;
    r = 0;
    t = 1;
    printf("r+t =%d\n",r&&t);
    printf("r+t =%d\n",r||t);
    printf("%d\n",!t);
    
    return 0;
}