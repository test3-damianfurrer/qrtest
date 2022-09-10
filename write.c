#include <stdio.h>
#include <stdlib.h>
#define MAX_PATH 4096

int main(int argc, char ** argv){
    FILE *fptr;
    char *initfname="test.txt";
    char *fname;
    int fnamelen;
    int filenumber=0;
    char c;
    printf("argc: %d\n",argc);

    fname = (char*) calloc (MAX_PATH,sizeof(char));

    if (argc>1)
        initfname=argv[1];

    c=getc(stdin);
    int ind;
    while(c!=-1){
        ind=filenumber%10;
        switch (ind) {
        case 0:
            for(fnamelen=0;initfname[fnamelen];fnamelen++)
        	fname[fnamelen]=initfname[fnamelen];
        break;
        case 1:
            fname[fnamelen]='1';
        break;
        case 2:
            fname[fnamelen]='2';
        break;
        case 3:
            fname[fnamelen]='3';
        break;
        case 4:
            fname[fnamelen]='4';
        break;
        case 5:
            fname[fnamelen]='5';
        break;
        case 6:
            fname[fnamelen]='6';
        break;
        case 7:
            fname[fnamelen]='7';
        break;
        case 8:
            fname[fnamelen]='8';
        break;
        case 9:
            fname[fnamelen]='9';
            initfname[fnamelen]='1';
            fnamelen++;
        break;
        }
        fptr=fopen(fname,"w");
        for(int i=0;i<4296;i++){
            putc(c,fptr);
            c=getc(stdin);
            if(c==-1)
                break;
        }
        fclose(fptr);
        filenumber++;
    }
}
