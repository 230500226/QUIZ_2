/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 13/04/2023
/************* HEADER FILES ***************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/************* GLOBAL VARIABLES ************/
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;
/************* MAIN FUNCTION**************/
int main(){

    char *input[50];
    char *comp = "1";
    printf("Please input a character, digit, or special character to confirm you input\n");
    // scanf("%s", &input);

//format specifier string is expected 
    if(input == "1"){
        printf("succeed");
    } else {
        printf("error");
    }

    // if(input == "1" || input == "2" || input == "3" || input == "4" || input == "5" || input == "6" || input == "7" || input == "8" || input == "9" || input == "10"){
    //     printf("You have entered a Digit");
    // } else if(input == "a" || input == "b" || input == "c" || input == "d" || input == "e" || input == "f" || input == "g" || input == "h" || input == "i" || input == "j" || input == "k" || input == "l" || input == "m" || input == "n" || input == "o" || input == "p" || input == "q" || input == "r" || input == "s" || input == "t" || input == "u" || input == "v" || input == "w" || input == "x" || input == "y " || input == "z") {
    //     printf("You have entered a character");
    // } else {
    //     printf("You have have entered a special character");
    // }
return 0;
}