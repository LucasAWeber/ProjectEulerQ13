#include <stdio.h>
#define GOALDIGITS 10
#define NUMS 100
#define TOTALDIGITS 50
#define SUMDIGITS 10000

int main(void)
{
    FILE * fptr = fopen("test.txt", "r");
    int num[NUMS][TOTALDIGITS];
    int sum[SUMDIGITS];
    int counter = 0;

    for (int i = 0; i < NUMS; i++)
    {
        for (int j = 0; j < TOTALDIGITS; j++)
        {
            fscanf(fptr, "%1d", &num[i][j]);
        }
    }

    /*
    for (int i = 0; i < NUMS; i++)
    {
        for (int j = 0; j < TOTALDIGITS; j++)
        {
            printf("%d", num[i][j]);
        }
        printf("\n");
    }
    */

   // trying to manually add digits first the ones column then the tens column etc

    for (int i = TOTALDIGITS - 1; i >= 0; i--)
    {
        for (int j = 0; j < NUMS; j++)
        {
            sum[counter] += num[j][i];
        }
    }

    return 0;
}