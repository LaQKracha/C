#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


struct __attribute__((__packed__)) mystruct {
	unsigned short version;
	unsigned short employees;
	unsigned int filesize;
};

int main(int argc, char *argv[]){
	struct mystruct head = {0};

	if (argc != 2) {
		printf("Usage %s <filename>\n", argv[0]);
		return 0;
	}


	int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
	if (fd == -1) {
		perror("open");
		return -1;
	}

	if (read(fd, &head, sizeof(head)) != sizeof(head)) {
		perror("read");
		close(fd);
		return -1;
	}

	printf("DB version: %i\n", head.version);
	printf("DB number of employees: %i\n", head.employees);
	printf("File size: %i\n", head.filesize);
	
	close(fd);
	return 0;
}
