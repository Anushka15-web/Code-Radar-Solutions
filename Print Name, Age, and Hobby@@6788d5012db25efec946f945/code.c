#include <stdio.h>
int main() {
    char a[100],c[100];
    int b;
    printf("Name:");
    scanf("%s",a);
    printf("Age:" );
    scanf("%d",&b);
    printf("Hobby:");
    scanf("%s",c);
    printf("Name: %s",a);
    printf("Age: %d",&b);
    printf("Hobby: %s",c);
    return 0;
}