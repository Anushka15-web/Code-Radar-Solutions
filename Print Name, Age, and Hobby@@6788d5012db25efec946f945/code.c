#include <stdio.h>
int main() {
    char a;
    int b;
    char c;
    scanf("%s",a);
    printf("Name: %s",a);
    scanf("%d\n",b);
    printf("Age: %d",&b);
    scanf(" %s\n",c);
    printf("Hobby: %s",c);
    return 0;
}