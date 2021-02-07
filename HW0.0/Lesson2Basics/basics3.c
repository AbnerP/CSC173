#include <stdio.h>

void newLine(){
    printf("\n");
}

int copyfile(char* srcfilename, char* dstfilename){
    FILE* src = fopen(srcfilename,"r");
    if(src == NULL){
        return 0;
    }

    FILE* dst = fopen(dstfilename, "w");
    if(dst==NULL){
        return 0;
    }

    while(!feof(src)){
        char str[256];
        if (fgets(str,255,src) != NULL){
            fprintf(dst,"%s",str);
        }
    }

    fclose(src);
    fclose(dst);
    return 1;
}


int main(int argc, char *argv[]) {
    newLine();

    //Step 7
    copyfile("xanadu.txt","copy of xanadu.txt");

}