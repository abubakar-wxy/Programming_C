#include<stdio.h>

int print(int i, int n)
{
    if(i > n)
        return 0;
    printf("%d ", i);
    print(i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    print(1, n);
    return 0;
}