#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a>b){
        if(b%a==0 || b%a==1){
            printf("Yes");
        }
        else {
            printf("No")
        }
    }
    
    return 0;
}
