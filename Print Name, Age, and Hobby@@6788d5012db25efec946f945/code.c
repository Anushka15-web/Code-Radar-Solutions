#include <stdio.h>
int main() {
    char a[];
    int b;
    char c[];
    scanf("%s",a);
    printf("Name: %s\n",a);
    scanf("%d\n",b);
    printf("Age: %d",&b);
    scanf(" %s\n",c);
    printf("Hobby: %s\n",c);
    return 0;
}