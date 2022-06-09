#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
    int *p;
    *p=*a;
    
    *a=*a+*b;
    *b=abs(*p-*b);
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
