// #include <stdio.h>
// int main(){
//     int a,i;
//     scanf("%d",&a);
//     for(i=1;i<=a;i++){
//         printf("* ");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int a, i, j; // Declare i and j
    scanf("%d", &a);
    for(i = 1; i <= a; i++) { // For each row
        for(j = 1; j <= i; j++) { // Print stars in the current row
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
