#include<stdio.h>

int main() {
    FILE *fin, *fout;
    fin = fopen("homework_2_4.in", "rb");
    fout = fopen("homework_2_4.out", "wb");
    long long m = 0, n = 0;
    while (fscanf(fin, "%lld%lld", &n, &m) == 2) {
        if (n == 0 && m ==0) {
            break;
        }
        double result = 0.0;
        for (long long i = n; i <= m; i++) {
            result += (1.0) / (i * i);
        }
        fprintf(fout, "%0.5f\n", result);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}