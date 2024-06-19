#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct __attribute__((__packed__)) employee{
    unsigned int id;
    unsigned int age;
    bool isadmin;
};

void initialize_employee(struct employee *e){
    e->id = 0;
    e->age = 0;
    e->isadmin = false;
    return;
}

int main(){
    struct employee erick;
    initialize_employee(&erick);
    printf("Erick: %i, %i", erick.id, erick.age);

    return 0;
}
