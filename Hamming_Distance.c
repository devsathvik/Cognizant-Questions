#include <stdio.h>
#include <stdlib.h>

int hammingDistance(long long a, long long b) {
    //===== Write Your Logic Here =====
    int x = a ^ b;
    int count = 0;

    while(x > 0){
        x &= (x - 1); //Brian Kernighan’s trick
        count++;
    }
    return count;

}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    printf("%d\n", hammingDistance(a, b));

    return 0;
}
