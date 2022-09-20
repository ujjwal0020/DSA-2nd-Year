#include <stdio.h>
#include <cstdlib>
void update(int *a,int *b) {
    int s,n;
    s=*a+*b;
    printf("%d\n",s);
    n=(*a-*b);
    int m;
    m=abs(n);
    printf("%d",m);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}
