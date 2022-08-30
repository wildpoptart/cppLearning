#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum1, dif1;
    float num3, num4, sum2, dif2;
    printf("Input 2 integer & 2 float nums\n");
    scanf("%d %d\n", &num1, &num2);
    scanf("%f %f", &num3, &num4);

    //math
    sum1 = num1 + num2;
    dif1 = num1 - num2;

    sum2 = num3 + num4;
    dif2 = num3 - num4;

    printf("Int Sum:%d Int Diff:%d\nFloat Sum:%.1f Diff:%.1f\n", sum1,dif1,sum2,dif2);

    return 0;
}

