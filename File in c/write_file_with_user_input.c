    /// Write file With user input
#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    file = fopen("Myself.txt","w");     ///  a ->> when  overwrite, otherwise w.
    if(file==NULL){
        printf("File doesn't exist\n");
    }
    else{
        printf("File is opened\n");
        printf("Enter Your Full Name :");
        gets(name);
        fputc("\n",file);
        fputs(name,file);
        fputc("\n",file);
        printf("File is written successfully\n");
        fclose(file);
    }
    return 0;
}

