#include <stdio.h>

int main(void) 
{
    long long int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}