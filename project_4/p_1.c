#include <stdio.h>

int main(){
    int a = 41;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", a + j);
        }
        printf("\n");
    }

}
   