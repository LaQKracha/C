#include <linux/limits.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]){
        if (argc != 2) {
                printf("Usage: %s <filename>\n", argv[0]);
                return 0;
        }

        // define file descriptor (man 2 open)
        // function params -> open(filepath, access_mode, permisions_in_case_of_new_file)  
        int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
        if (fd == -1) {
                perror("open");
                return -1;
        }

        char *buf = "I'm a content created by C code ,)";
        write(fd, buf, strlen(buf));
        close(fd);


        return 0;
}
