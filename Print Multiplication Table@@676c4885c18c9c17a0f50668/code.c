// #include <stdio.h>


// int main() {
//     int a,mtable=1;
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         mtable*=i
//     }
//     printf("%d! = %d",a,mtable);
//     return 0;
// }
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);  
    
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", a, i, a * i);  
    }

    return 0;
}
