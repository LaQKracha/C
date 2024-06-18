#include <stdio.h>
#include <stdbool.h>
#define PRODS 100

/*
Depending on the system and copiler the size of a structure varies, because of the optimization
The padding characters and offsets added by the compilation or system varies, so if we try to comunicate
those different systems with the program we could have compatibility issues.

And we can solve that packeting the structure
*/

struct __attribute__((__packed__)) product_ty{
    char name[120];
    float price;
    char category[30];
    bool special;
};

int main(){
    struct product_ty products[PRODS];
    printf("Size of employee: %lu\n", sizeof(struct product_ty));
    return 0;
}
