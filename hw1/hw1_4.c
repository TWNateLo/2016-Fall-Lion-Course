/*************************************************************************
*�Ǹ�: B24046037
*�m�W: ù�F��
*�sĶ�覡: gcc -o hw1_4 hw1_4.c
*����覡: ./hw1_4 97
*�{���\��: Get a dollar value from user, calculate and print how to pay the amount with minimum amount of bills.
*��s���: 2016.09.23
**************************************************************************/





# include <stdio.h>
# include <stdlib.h>
int main (int argc, char **argv)
{
        int x, twenty, ten, five, one;
        x = atoi(argv[1]);      //Using argv to get command line input and atoi() to convert char to int
        twenty = x / 20;
        ten = (x - 20 * twenty) / 10;
        five = (x - 20 * twenty - 10 * ten) / 5;
        one = (x - 20 * twenty - 10 * ten - 5 * five);
        printf("$20\tbills : %d\n$10\tbills : %d\n$5\tbills : %d\n$1\tbills : %d\n", twenty, ten, five, one);   //Print out the minimum needed amount of bills to pay the price
        return 0;
}