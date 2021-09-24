    /// Write file
#include<stdio.h>
int main()
{
    FILE *file;
    char name[100] = "      mrk pulock";
    int i,length;
    length = strlen(name);
    file = fopen("Myself.txt","a");     ///  a ->> when  overwrite, otherwise w.
    if(file==NULL){
        printf("File doesn't exist\n");
    }
    else{
        printf("File is opened\n");
        for(i=0; i<length; i++){
            fputc(name[i],file);
        }
        printf("File is written successfully\n");
        fclose(file);
    }



    return 0;
}

