#include <stdio.h>
#include "my_mat.h"

int main(){
    char input_choice = 1;
    while (input_choice != 'D'){
        scanf("%c", &input_choice);
        switch(input_choice){
        case 'A':
            function_1();
            break;

        case 'B':
            function_2();
            break;

        case 'C':
            function_3();
            break;

        case 'D':
            break;
        
        default:
            break;
        }
    }
    return 0;
}