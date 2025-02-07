#include <stdio.h>

int main(){
    int a, b;

    printf(" ENTER THE FIRST NUMBER:- ");
    scanf(" %d", &a);
    
    printf(" ENTER THE SECOND NUMBER:- ");
    scanf(" %d", &b);

    if(a > b){

        printf(" NUMBER IS POSITIVE");
    }

    else if ( a < b){
        printf("THIS NUMBER IS NEGATIVE");

    }
    else {
        printf("THIS NUMBER IS NEUTRAL");
    }
}
