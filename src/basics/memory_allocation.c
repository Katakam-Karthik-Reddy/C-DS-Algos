#include <stdio.h>
#include <stdlib.h>



void add(int a, int b, int **sum){
    **sum = a+b;
}

void s(int a, int b, int *sum){
    *sum = a+b;
}


int main(){

    int *mem = malloc(sizeof(int) * 20);
    printf("%lu\n", sizeof(mem));
    for(int index=0; index<20; index++){
        *(mem+index) = index;
    }
    for(int index=0; index<20; index++){
        printf("%i\n", *(mem+index));
    }

    
    int a = 10;
    int b = 10;
    int *sum = (int *)malloc(4);
    add(a, b, &sum);
    printf("sum : %i\n", *sum);

    int arr[10] = {0};
    s(a, b, &arr[2]);
    printf("%i\n", *(arr+2));
}
