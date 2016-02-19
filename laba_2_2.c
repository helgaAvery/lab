#include <stdio.h>
#include <fcntl.h>

int main ()
{
	char outOne[10], outTwo[10], outThree[10];
	int fileHandleOne, fileHandleTwo, fileHandleThree, count;
	
	fileHandleOne = open ("l2.txt", O_RDONLY);
	printf("Handle One = %d ", fileHandleOne);
	fflush(stdout);
	
	fileHandleTwo = dup(fileHandleOne);
	printf("Handle Two = %d ", fileHandleTwo);
	fflush(stdout);
	
	fileHandleThree = open ("l2.txt", O_RDONLY);
	printf("Handle Three = %d ", fileHandleThree);
	fflush(stdout);
	
	printf("\n");
	
	if(fileHandleOne == -1 || fileHandleTwo == -1 || fileHandleThree == -1)
		return;
	
	//работа с курсором
	lseek(fileHandleOne,9,SEEK_SET);
	read(fileHandleOne, outOne, 7);
	write(1, outOne, 7);
	printf("\n");
	
	lseek(fileHandleTwo,9,SEEK_SET);
	read(fileHandleTwo, outTwo, 7);
	write(1, outTwo, 7);
	printf("\n");
	
	lseek(fileHandleThree,9,SEEK_SET);
	read(fileHandleThree, outOne, 7);
	write(1, outThree, 7);
	printf("\n");
	
	close(fileHandleOne);
	close(fileHandleTwo);
	close(fileHandleThree);
	
	return 0;
}