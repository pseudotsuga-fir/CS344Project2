#include <fcntl.h>
#include <unistd.h>

int main(int argc, char** argv) {
	(void)argc;
	int fileDesc = open(argv[1], O_RDWR);
	char fileContents[2048];
	int count = read(fileDesc, fileContents, 2048);
	write(1, fileContents, count);
	close(fileDesc);
}
