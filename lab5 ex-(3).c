
#include <stdio.h>

int LCM(int N1, int N2)
{
    static int common = 1;

    if (common % N1 == 0 && common % N2 == 0)
    {
        return common;
    }
    common++;
    LCM(N1, N2);
    return common;
}

int main()
{
    int N1, N2, result;
    printf("Enter first number = ");
    scanf("%d", &N1);
    printf("Enter second number = ");
    scanf("%d", &N2);
    result = LCM(N1, N2);
    printf("The LCM of %d and %d is %d\n", N1, N2, result);
    return 0;
}
