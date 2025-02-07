#include <STDIO.H>

int main(){

    int a,b;

    printf("ENTER THE FIRST VALUE:- ");
    scanf("%d",&a);

    printf("ENTER THE SECOND VALUE:- ");
    scanf("%d",&b);

    if( a < b){
        printf("A IS MINIMUM NUMBER : %d",a);
    }else{
        printf("B IS MINIMUM NUMBER : %d",b);
    };
}
