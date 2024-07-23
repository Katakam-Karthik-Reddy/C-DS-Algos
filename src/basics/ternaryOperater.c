#include <stdio.h>

int main(){

    int a = 10;
    int b = 12;
    int max;

    // Normal way of writing if conditions
    if(a>b){
        max = a;
    }
    else{
        max = b;
    }

    printf("%i", max);

    // Ternary operator
    max = (a>b)? a : b;

    printf("%i", max);
    
}
