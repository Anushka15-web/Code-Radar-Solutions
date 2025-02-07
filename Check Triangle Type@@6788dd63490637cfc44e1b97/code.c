#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>0&& b>0 && c>0 && a==b==c){
        printf("Equilateral");
    }
    else if(a>0 && b>0 && c>0 && (a==b || b==c ||c==a )){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}