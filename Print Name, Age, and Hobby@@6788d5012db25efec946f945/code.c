#include <stdio.h>
int main() {
    char a[100],c[100];
    int b;
    scanf("%s",a);
    printf("Name: %s\n",a);
    printf("Age: %d\n", &b);
    scanf("%d",&b);
    printf("Hobby: %s\n",c);
    scanf("%s",c);
    return 0;
}