#include <stdio.h>

int sum_of_multiple(int N, int k);

int main(void)
{
    int ans;
    int N = 999;
    int k_1 = 3;
    int k_2 = 5;
    int k_3 = k_1 * k_2;

    ans = sum_of_multiple(N, k_1) + sum_of_multiple(N, k_2) - sum_of_multiple(N, k_3);
    printf("%i\n", ans);

    return 0;
}

int sum_of_multiple(int N, int k)
{
    int n;
    n = N / k;

    return (k * (n + 1) * n) / 2;
}
