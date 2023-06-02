#include <stdio.h>

int sumG(int n) {
    int sum = 0;
    for (int i = 1; i <= n-2; i++) {
        sum += i * (i+1) * (i+2);
    }
    return sum;
}
int main() {
    int result = sumG(6);
    printf("%d",result);
}