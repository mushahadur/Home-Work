    /// Write file With user input
#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    int age;
    file = fopen("Myself.txt","w");     ///  a ->> when  overwrite, otherwise w.
    if(file==NULL){
        printf("File doesn't exist\n");
    }
    else{
        printf("File is opened\n");
        printf("Enter Your Full Name :");
        gets(name);
        printf("Enter Your Age :");
        scanf("%d",&age);
        ///fprintf(filePointer, formet specifiers, Variables);
        fprintf(file, "Name : %s\nAge : %d",name,age);

        printf("File is written successfully\n");
        fclose(file);
    }



    return 0;
}


