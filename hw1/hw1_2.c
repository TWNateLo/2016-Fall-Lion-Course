/*************************************************************************
*�Ǹ�: B24046037
*�m�W: ù�F��
*�sĶ�覡: gcc -o hw1_2 hw1_2.c
*����覡: ./hw1_2 5
*�{���\��: Get a value from user, calculate and print out the value of the polynomial.
*��s���: 2016.09.22
**************************************************************************/





# include <stdio.h>
# include <stdlib.h>
int main (int argc, char **argv)
{
        int x, r;
        x = atoi(argv[1]);      //using argv to get command line input and atoi() to convert char to int.
        r = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;      //The designated polynomial
        printf("The value of the polynomial is: \"%d\"\n", r);  //Print out the calculation of the polynomial
        return 0;
}