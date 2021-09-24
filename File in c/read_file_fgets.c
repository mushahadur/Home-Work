    /// Read file With fgets()
#include<stdio.h>
int main()
{
    FILE *file;
    char ch[44];

    file = fopen("Myself.txt","r");
    if(file==NULL){
        printf("File doesn't exist\n");
    }
    else{
        printf("File is opened\n");
        while(!feof(file)){     /// Loop Problem
        ///fgets(variables, Size, filePointer);
        fgets(ch, 33, file);
        printf("%s\n",ch);
        fclose(file);
        }

    }



    return 0;
}




