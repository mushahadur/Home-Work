    /// Creat  file , Open file, Close file
#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("Myself.txt","w");
    if(file==NULL){
        printf("File doesn't exist\n");
    }
    else{
        printf("File is opened\n");
        fclose(file);
    }



    return 0;
}
