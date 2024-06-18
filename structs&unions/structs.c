#include <stdio.h>
#include <stdbool.h>
#define MAX_EMPLOYEES 1000

struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool isadmin;
};

int main(){
    // struct employee_t Fred;
    // Fred.isadmin = true;
    int i = 0;

    struct employee_t employees[MAX_EMPLOYEES];

    for(i = 0; i <= MAX_EMPLOYEES; i++){
        employees[i].id = i;
        employees[i].isadmin = false;
    }

    printf("ID: %d\n", employees[10].id);
    return 0;
}
