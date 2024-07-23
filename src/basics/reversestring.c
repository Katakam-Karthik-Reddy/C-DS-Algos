#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverse(char *str){
    char *end = str+strlen(str)-1;

    while(str<end){
        printf("start %p, end %p\n", str, end);
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}




int main(){

    char string[] = "karthik";
    printf("before %s\n",string);
    reverse(string);
    char str1[sizeof(string)];
    printf("after %s\n", string);
    printf("str1 after %s\n", str1);

}
