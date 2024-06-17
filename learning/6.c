#include <stdio.h>

int main(int argc, char *argv[]){
    int temp;
    printf("What temperature is it? # ");
    scanf("%d", &temp);
    // using else if conditions, those depend on the last if and else if statements in order to work, by the opposite way, using just single if conditions (without the use of else if), those conditions becomes independent from each other.
    if (temp >= 70){
        printf("Dang bruther, it's hot!\n");
    } else if (temp >= 30 && temp < 70) {
        printf("Dang bruther, it's mild!\n");
    } else {
        printf("Dang bruther, it's cold!\n");
    }

    return 0;
}