/*************************************************************************
*�Ǹ�: B24046037
*�m�W: ù�F��
*�sĶ�覡: gcc -o hw1_3 hw1_3.c
*����覡: ./hw1_3 5
*�{���\��: Get a value from user, calculate and print out the value of the modified polynomial.
*��s���: 2016.09.23
**************************************************************************/





# include <stdio.h>
# include <stdlib.h>
int main (int argc, char **argv)
{
int x, r;
        x = atoi(argv[1]);      //Using argv to get command line input and atoi() to convert char to int
        r = ((((3 * x + 2) * x -5) * x - 1) * x + 7) * x - 6;   //The designated modified polynomial
        printf("The value of the polynomial is: \"%d\"\n", r);  //Print out the calculation of modified polynomial
        return 0;
}