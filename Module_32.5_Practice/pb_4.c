#include<stdio.h>

int solve(int n)
{
    if(n == 0)
        return 0;
    printf("%d ", n);
    solve(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}