#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

struct __attribute__((__packed__)) header {
	unsigned short version;
	unsigned short nom;
	unsigned int filesize;
};

int main(int argc, char *argv[]){
	struct header head = {0};
	if (argc != 2) {
		printf("Usage: %s <filename>\n", argv[0]);
		return 0;
	}

	int fd = open(argv[1], O_RDWR | O_CREAT, 0664);
	if (fd == -1) {
		perror("open");
		return -1;
	}

	char *buff = "Hello, I'm the default content\n";
	write(fd, buff, strlen(buff));
	close(fd);

	FILE *file;
	file = fopen(argv[1], "a+");
	if (file == NULL) {
		perror("fopen");
		return -1;
	}
	
	fprintf(file, "And something else added\n");
	fclose(file);


	return 0;
}
