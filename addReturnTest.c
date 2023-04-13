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

void add(int x,int y);
int main()
    {
        int a, b;
        printf("enter value: ");
        scanf("%d%d",&a,&b);
        add(a,b);
        return 0;
    }
void add(int x,int y)
    {
        int z;
        z=x+y;
        printf ("The sum = %d",z);
    } 
