#include <stdio.h>
#define DIGITS 10
#define NUMS 100

// long long still isnt large enough need to create more efficient algorithm
int main(void)
{
    FILE * fptr = fopen("test.txt", "r");
    long long int num[NUMS];
    //long long int sum = 0;

    for (int i = 0; i < NUMS; i++)
    {
        fscanf(fptr, "%lld", &num[i]);
    }
    
    for (int i = 0; i < NUMS; i++)
    {
        printf("%lld\n", num[i]);
    }

    return 0;
}