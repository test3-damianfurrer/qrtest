	#include <stdio.h>
#include <stdlib.h>
#define MAX_PATH 4096

int main(int argc, char ** argv){
    FILE *fptr;
    //char number[10]//not nulled;
    char *number=(char*)calloc(10,sizeof(char));
    char *initinitfname="test.txt";
    char *initfname;
    char *fname;
    int fnamelen;
    int filenumber=0;
    char c;
    printf("argc: %d\n",argc);

    initfname = (char*) calloc (MAX_PATH,sizeof(char));
    fname = (char*) calloc (MAX_PATH,sizeof(char));

    if (argc>1)
        initinitfname=argv[1];

    for(fnamelen=0;initinitfname[fnamelen];fnamelen++){
      	initfname[fnamelen]=initinitfname[fnamelen];
    }

    c=getc(stdin);
    int ind;

    int fullnumber;

    while(c!=-1){
        fullnumber=filenumber;
        int x=0;
        while(fullnumber>0){
            int numb=fullnumber%10;
            switch (numb) {
                case 0:
                    number[x]='0'; break;
                case 1:
                    number[x]='1'; break;
                case 2:
                    number[x]='2'; break;
                case 3:
                    number[x]='3'; break;
                case 4:
                    number[x]='4'; break;
                case 5:
                    number[x]='5'; break;
                case 6:
                    number[x]='6'; break;
                case 7:
                    number[x]='7'; break;
                case 8:
                    number[x]='8'; break;
                case 9:
                    number[x]='9'; break;
            }
            fullnumber=fullnumber/10;
            x++;
        }
//        fnamelen;
        for(fnamelen=0;initfname[fnamelen];fnamelen++)
          	fname[fnamelen]=initfname[fnamelen];
        for(int i=9;i>=0;i--)
            if(number[i]!='\0')
                fname[fnamelen++]=number[i];
        /*
            ind=filenumber%10;
        switch (ind) {
        case 0:
            for(int i=0;initfname[i];i++)
        	fname[i]=initfname[i];
	    fname[fnamelen]='0';
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
        */
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
    free(fname);
    free(initfname);
}
