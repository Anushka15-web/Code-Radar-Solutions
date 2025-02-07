#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a >= b) {
        if (a % b == 0 || a % b == 1) {
            printf("Yes");
        } else {
            printf("No");
        }
    } else {
        printf("a is not greater than b");
    }
    
    return 0;
}

