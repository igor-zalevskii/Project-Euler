# Problem 1 - Multiples of 3 or 5  
problem  
understanding the problem  
plan  
solution (prove by induction; implementation; code)  
reflection  
references  

## problem  
To find the sum of all the multiples of $3$ or $5$ bellow $1000$.  

## understanding the problem  
- [ ] TODO: add {}  
We want to know how many 3rd and 5th are in the set $N = \{1, 2, ..., 999\}$.  

Let's use example of 15 elements to make better sence of it.  
(pictures)  


The intuition says it should be a case and we can brute-force (complexity `O(n)`):  
```C
#include <stdio.h>

int main(void) {
    int ans = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            ans += i;
        }
    }
    printf("%i\n", ans);
    return 0;
}
```  

Let's try to prove that this is always true using induction.  


## plan  

N - set of integers  
k - divider  
n - number of dividers  
`N % k`  


$k * 1 + k * 2 + k * 3 + ... + k * n$  
$k * (1 + 2 + 3 + ... + n)$  
$\Large \frac{k * (n+1) * (n)}{2}$  

## solution
### prove by induction  
Base case (0)  
$P(0) = 0|3 = 0$

From 0 to N:  
k = 3  

$A$ a set of all numbers $K$ % by 3

A + B - A intersect B

### implimitation details

### code
complexity: `O(1)`.
```C
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
```

 
## reflection
- ...?  

## references  
https://projecteuler.net/problem=1  
https://en.wikipedia.org/wiki/File:Venn_A_intersect_B.svg  
