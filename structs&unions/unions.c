#include <stdio.h>
#include <stdbool.h>
#define MAX_EMPLOYEES 1000

union un {
    int x;
    char c;
    short s;
};

int main(){
    union un u;
    u.x = 0x41424344;
    printf("%hx %hhx", u.s, u.c);
}
