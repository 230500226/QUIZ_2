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
 int * build_array();
int main()
{
    int *a, k;
    a = build_array();
    for (k = 0; k < 10; k=k+2)
        printf("%d\n", a[k]);

    char *c = "1";
    if(c=="2"){printf("w");}else{printf("l");}
    return 0;
}
int * build_array()
{
    static int Tab[10]= {1,2,3,4,5,6,7,8,9,10};
    return Tab;
}