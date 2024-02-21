#include<stdio.h>

int max(int p, int q, int r, int o);

int main() {
    int s1, s2, s3, s4;

   
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

    int maxno = max(s1, s2, s3, s4);

    printf("The maximum of given numbers is: %d\n", maxno);

    return 0;
}

int max(int p, int q, int r, int o) {
    int maxno = p;
    if (q > maxno) {
        maxno = q;
    }
    if (r > maxno) {
        maxno = r;
    }
    if (o > maxno) {
        maxno = o;
    }
    return maxno;
}

