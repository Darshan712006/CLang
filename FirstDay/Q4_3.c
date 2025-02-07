#include <stdio.h>

int main (){
    int a,b;

    printf(" ENTER THE FIRST  VARIABLES");
    scanf("%d",a);

    printf("ENTER THE SECOND VARIABLES");
    scanf("%d",b);

    a = a+b;
    b = a - b;
    a = a - b;
     printf("%d",a);
     printf("%d",b);
} 
