#include <stdio.h>
#include <fcntl.h>

int main()
{
	
	char buffer[100];
	char fname[] = "l2.out";
	int handleFile, readText;
	
	printf("Enter your text:\n");
	
	handleFile = open(fname, O_WRONLY|O_CREAT|O_TRUNC);
	readText = read (INPUT_HANDLE, buffer, 100);
	write (handleFile, buffer, read);
	close(handleFile);

	return 0;
}