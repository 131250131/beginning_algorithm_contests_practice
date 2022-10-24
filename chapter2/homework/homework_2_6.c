#include<stdio.h>

int main() {
    for (int i = 100; i <= 333; i++) {
        int i2 = i * 2;
        int i3 = i * 3;
        int k1 = i / 100;
        int k2 = i / 10 % 10;
        int k3 = i % 10;
        int k4 = i2 / 100;
        int k5 = i2 / 10 % 10;
        int k6 = i2 % 10;        
        int k7 = i3 / 100;
        int k8 = i3 / 10 % 10;
        int k9 = i3 % 10;
        if (k1*k2*k3*k4*k5*k6*k7*k8*k9 == 362880 && (k1+k2+k3+k4+k5+k6+k7+k8+k9) == 45) {
            printf("%d %d %d\n", i, i2, i3);
        }    
    }
    return 0;
}