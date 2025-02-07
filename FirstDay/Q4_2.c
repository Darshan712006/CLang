#include <stdio.h>

int main(){

    int a , b , c;

    printf(" ENTER THE FIRST VALUE");
    scanf("%d",&a);

    printf(" ENTER THE SECOND VALUE");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf(" A = %d",a);
    printf(" B = %d",b);
}