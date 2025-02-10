#include <stdio.h>


int main() {
    int a,mtable=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        mtable*=i
    }
    printf("%d! * %d = %d",a,i,mtable);
    return 0;
}