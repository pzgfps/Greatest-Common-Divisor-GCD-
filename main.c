#include <stdio.h>

int main() {
    
    int a = 0, b = 0, r, i;
    
    while(a == 0 || b == 0) {
    printf("Escreva o valor de A: ");
    scanf("%d", &a);
    
    printf("Escreva o valor de B: ");
    scanf("%d", &b);
    }
    
    r = a % b;
    for(i = 1; r > 0; i++) {
        printf("\n%d) A = %d - B = %d - R = %d\n", i, a, b, r);
        a = b;
        b = r;
        r = a % b;
        
    }
    
    printf("\nMDC = %d\n", b);

    return b;
}
