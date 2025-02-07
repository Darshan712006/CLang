#include <stdio.h>
 
 int main(){

    float a,b,c;

    printf(" ENTER THE MATHS MARK :- ");
    scanf("%f",&a);
    
    printf(" ENTER THE ENGLISH MARK :- ");
    scanf("%f",&b);
    
    printf(" ENTER THE SCIENCE MARK :- ");
    scanf("%f",&c);

    float x  = (a + b + c)/3;
    printf(" AVERAGE MARK %.2f", x); 
 }

    