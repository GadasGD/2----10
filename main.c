#include <stdio.h>
#include <math.h>

int binvdec(char arr[], int size);

int main()
{
    char test[] = "101";
    int res = binvdec(test, sizeof(test));
    printf("%d", res);
    return 0;
}

int binvdec(char arr[], int size)
{   
    int res = 0;
    for (int i = 0, stepen = size - 2; i < size - 1; i++, stepen--)
    {
        res += (arr[i] - '0') * pow(2, stepen);
    }
    return res;
}
