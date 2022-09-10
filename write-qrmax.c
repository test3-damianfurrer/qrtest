#include <stdio.h>

int main(int argc, char ** argv){
FILE *fptr;
fptr=fopen("./test.txt","w");

for(int i=0;i<4296;i++)
  putc('A',fptr);

fclose(fptr);
}
