#include <stdio.h>
int main() {
    char a[],c[];
    int b;
    printf("Name:");
    scanf("%s",a);
    printf("Age:");
    scanf("%d",&b);
    printf("Hobby:");
    scanf("%s",c);
    printf("Name: %s",a);
    printf("Age: %d",&b);
    printf("Hobby: %s",c);
    return 0;
}