# Problem 1 - Multiples of 3 or 5
Sum of all the multiples of 3 or 5 bellow 1000.

## Brute-force: O(n).
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
