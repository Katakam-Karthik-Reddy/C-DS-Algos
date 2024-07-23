#include <stdio.h>


int main(){

    int start = 0;
    int end   = 10;

    for(int i=start; i<end; i++){
        printf("for loop %i\n", i);
    }

    printf("***********************\n");
    int temp = start;
    while(temp<end){
        printf("while loop %i\n", temp);
        temp++;
    }
    printf("***********************\n");
    temp = start;
    do{
        printf("do while loop %i\n", temp);
        temp++;
    }while(temp<end);


}
