#include <stdio.h>


int main(){

    // Unary operators
    printf("***** Unary operators *****\n");
    int value = 10;
    printf("original value %i\n", value);
    int incrementedvalue = value++; // post increment
    printf("post increment (++ operator) incrementedvalue: %i\n", incrementedvalue);
    printf("value %i\n", value);

    incrementedvalue = ++value; // pre increment
    printf("pre increment (++ operator) incrementedvalue : %i\n", incrementedvalue);

    printf("\n");
    int decrementedvalue = value--; // post decrement
    printf("post decrement (-- operator) incrementedvalue: %i\n", decrementedvalue);
    printf("value %i\n", value);

    decrementedvalue= --value; // pre decrement
    printf("pre decrement (-- operator) decrementedvalue : %i\n", decrementedvalue);

    // Binary operators
    printf("\n");
    printf("\n");
    printf("***** Binary operators *****\n");
    printf("*** arithmetic operator ***");
    printf("value %i\n", value);
    int addedvalue = value + 1;
    printf("addition by 1 ( + operator) addedvalue : %i\n", addedvalue);

    printf("value %i\n", value);
    int subtractedvalue = value - 1;
    printf("subtracted by 1 ( - operator) subtractedvalue : %i\n", subtractedvalue);
    
    printf("value %i\n", value);
    int multipledvalue = value * 2;
    printf("multipled by 2 ( * operator) multipledvalue : %i\n", multipledvalue);

    printf("value %i\n", value);
    int dividedvalue = value / 2;
    printf("divided by 2 ( - operator) dividedvalue : %i\n", dividedvalue);
    
    printf("\n");
    printf("*** rational operator ***\n");
    value = value - 1;
    if(value < 10){
        printf("value is less then 10\n");
    }
    value = value + 2;
    if(value > 10){
        printf("value is greater then 10\n");
    }

    value = value - 1;
    if(value <= 10){
        printf("value is less then or equal to 10\n");
    }
    value = value + 2;
    if(value >= 10){
        printf("value is greater then or equal to 10\n");
    }
    if(value == 12){
        printf("value is equal to 12\n");
    }

    if(value != 11){
        printf("value is not equal to 11\n");
    }

    printf("\n");
    printf("*** logical operator ***\n");
    if(value == 12 && value != 11){
        printf("value is equal to 12 and value is not equal to 11 ( && operator)\n");
    }
    if(value == 12 || value != 11){
        printf("value is equal to 12 or value is not equal to 11 ( || operator)\n");
    }
    if( !(value == 11)){
        printf("value is equal to 12 (! operator)\n");
    }

    printf("\n");
    printf("*** assignment operator ***\n");
    int newvalue = 10; // assignement
    printf("newvalue : %i\n", newvalue);
    newvalue += 1;
    printf("newvalue + by 1 ( += operator): %i\n", newvalue);
    newvalue -= 1;
    printf("newvalue - by 1 ( -= operator): %i\n", newvalue);
    newvalue *= 10;
    printf("newvalue * by 10 ( *= operator) : %i\n", newvalue);
    newvalue /= 4;
    printf("newvalue / by 4 ( /= operator) : %i\n", newvalue);
    newvalue %= 3;
    printf("newvalue modulo by 3 ( modulo operator) : %i\n", newvalue);

    printf("\n");
    printf("*** bit wise operator ***\n");
    int bitwise = 15;
    printf(" bitwise value : %i\n", bitwise);
    bitwise = bitwise & bitwise;
    printf(" bitwise value ( & operator ) %i\n", bitwise);
    bitwise = bitwise | bitwise;
    printf(" bitwise value ( | operator ) %i\n", bitwise);
    bitwise = bitwise << 2;
    printf(" bitwise value ( << operator ) %i\n", bitwise);
    bitwise = bitwise >> 2;
    printf(" bitwise value ( >> operator ) %i\n", bitwise);
    bitwise = ~bitwise;
    printf(" bitwise value ( ~ operator ) %i\n", bitwise);
    bitwise = bitwise ^ bitwise;
    printf(" bitwise value ( ^ operator ) %i\n", bitwise);
    
    printf("\n");
    printf("*** Ternary operator ***\n");
    int ternaryvalue = 10;
    (ternaryvalue == 10)? printf("ternary value is 10\n"): printf("ternary value is not 10\n");
    ternaryvalue++;
    (ternaryvalue == 10)? printf("ternary value is 10\n"): printf("ternary value is not 10\n");

}
