#include <stdio.h>

int num(int n1, int n2);

int main() {
    int n1, n2;
    printf("Enter 1st positive integers: ");
    scanf("%d", &n1);
    printf("Enter 2nd positive integers: ");
    scanf("%d", &n2);

    printf("G.C.D of %d and %d is %d.", n1, n2, num(n1, n2));
    return 0;
}

int num(int n1, int n2)
{
    if (n2 != 0)
        return num(n2, n1 % n2);
    else
        return n1;
}
