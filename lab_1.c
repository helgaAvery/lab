#include <stdio.h>
#include <string.h>

int main() {
  
 char buffer[100] = "It was readed ... ";
 int len;
 
 write(1,"Enter the text: ", 16);
 len = read(INPUT_HANDLE, buffer + 21 , 85);
 len+=20;

 write(OUTPUT_HANDLE, buffer, len);

 return 0;
}