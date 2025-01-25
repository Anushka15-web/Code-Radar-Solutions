#include <stdio.h>
int main() {
    char a[],c[];
    int b;
    scanf("%s",a);
    printf("Name: %s",a);
    scanf("%d\n",b);
    printf("Age: %d",&b);
    scanf(" %s\n",c);
    printf("Hobby: %s",c);
    return 0;
}