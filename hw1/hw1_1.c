/*************************************************************************
*�Ǹ�: B24046037
*�m�W: ù�F��
*�sĶ�覡: gcc -o hw1_1 hw1_1.c
*����覡: ./hw1_1
*�{���\��: Calculate and Print the volume of the sphere with radius of 10.
*��s���: 2016.09.22
**************************************************************************/



#include <stdio.h>
#define pi 3.14
#define r 10
int main (void)
{
        int volume;
        volume = 4.0f/3.0f * pi * r * r * r;    //If the 4.0f/3.0f is changed to just 4/3, the output will be wrong because 4/3 will be calculated as 1 in c.
        printf("The volume of this sphere is: \"%d\"\n", volume);   //Print out the volume of the designated sphere.
        return 0;
}