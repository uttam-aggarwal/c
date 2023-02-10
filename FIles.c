#include <stdio.h>
int main(){
    FILE *fptr;
    // fptr=fopen("filename",mode);
    // fptr=fopen("file.txt","r");
    //r to read ,rb to read binary.w to write,wb to write in binary,a to append
    // fptr=fopen("newfiles.c","r");
    // if(fptr==NULL){
    //     printf("files doesn't exist");
    // }else{
    //     fclose(fptr);
    // }
    // ------------------------------------------
    // fptr=fopen("file.txt","r");
    // char chr;
    // fscanf(fptr,"%c",&chr);
    // printf("character = %c\n",chr);
    // --------------------------------------------
    // fptr=fopen("file.txt","w");//earlier data will be erased and if file is not there then it will be created
    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'A');
    // fprintf(fptr,"%c",'N');
    // fprintf(fptr,"%c",'G');
    // fprintf(fptr,"%c",'O');
    // --------------------------------
    // fptr=fopen("file.txt","r");
    // printf("%c\n",fgetc(fptr));//another way to read and write using just printf
    // fptr=fopen("file.txt","w");
    // fputc('M',fptr);//another way to write
    // ----------------------------------------------
    //programme to read whole text file
    fptr=fopen("file.txt","r");
    char chr;
    chr=fgetc(fptr);
    while(chr!=EOF){//EOF is end of file
        printf("%c",chr);
        chr=fgetc(fptr);
    }
    fclose(fptr);
}