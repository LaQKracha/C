#include <stdio.h>

int main(){
    int x = 3;
    // * (pointer), it will save the memory address
    // &, the address of ...
    int *pX = &x;
    printf("%d\n", *pX); // print contents of that memory address
    printf("%p\n", pX); // print the pointer address
    return 0;
}
