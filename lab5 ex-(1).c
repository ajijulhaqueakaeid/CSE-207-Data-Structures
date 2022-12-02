#include <stdio.h>

int Power(int base, int pow);

int main()
{
    int n, p;

    printf("Enter Any Number: ");
    scanf("%d", &n);

    printf("Enter Power: ");
    scanf("%d", &p);

    printf("Result: %d\n", Power(n, p));


}

int Power(int base, int pow)
{
    if(pow==0)
    {
        return 1;
    }
    else
    {
        return base * Power(base, pow-1);
    }
}
