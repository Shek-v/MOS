#include <stdio.h>
 
void main()
{
    int	a;

    printf("Input an integer number: ");
    scanf("%d",&a);

    if (a > 0) {
	printf("Number input is Positive!\n");
    } else if (a < 0) {
	printf("Number input is Negative!\n");
    } else {
	printf("Number input is zero!\n");
    }
}
