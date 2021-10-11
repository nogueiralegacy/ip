#include <stdio.h>

int a, b, c, d, Comp1, Comp2, Nmaior;

int main(){
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    Comp1 = (a>b) ? a : b;
    Comp2 = (c>d) ? c : d;
    Nmaior = (Comp1>Comp2) ? Comp1 : Comp2;
    
    printf("%d\n", a+b+c+d-Nmaior);
    
}