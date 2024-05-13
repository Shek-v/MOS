#include <stdio.h>
/*
 *  Calculation using variables
 *     */
 
void main()
{
    /* Definition of variables */
    int a;		//  Definition of variable type
    int b = 3;		//  Definition and initialize
    int add, sub;	//  Definition of multiple variables 
    double avg;		//  Definition of double type variable

    a = 6;		//  Substitution
    add = a + b;	//  Add
    sub = a - b;	//  Subtract
    avg = (a + b) / 2.0;	//  Average

    printf("%d + %d = %d\n",a,b,add);
    printf("%d - %d = %d\n",a,b,sub);
    printf("Average of %d and %d:%f\n",a,b,avg);
}
