#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
    // man open, sections: synopsis, return value and errors
    int fd = open("./asasdasdasdddaksdjjajbsjd", O_RDONLY);
    if (fd == -1){
        perror("open");
        return -1;
    }
    return 0;
}
