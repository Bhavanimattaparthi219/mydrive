#include <stdio.h>

void update(int *a,int *b) {
    int i,j;
    i=*a;
    j=*b;
    *a=i+j;
    *b=abs(i-j);   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
