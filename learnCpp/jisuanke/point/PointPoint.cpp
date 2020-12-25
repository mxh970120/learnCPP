#include<iostream>

int main() {
    int a = 4;
    int *p;
    p = &a;
    int **q;  // **q指向*p存储的地址
    q = &p;
    
    printf("p in %p, q = %p\n", &p, q);
    printf("a in %p, p = %p, *q = %p\n", &a, p, *q);
    
    printf("a = %d, *p = %d, **q = %d\n", a, *p, **q);

    return 0;
}