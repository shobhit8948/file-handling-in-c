// how to create a file
#include <stdio.h>

int main() {
    FILE *file = fopen("myfile.txt", "w"); // "w" for write mode
    if (file != NULL) {
        // file created successfully
        fclose(file); // remember to close the file
    } else {
        // failed to create the file
    }
    return 0;
}

// how to read a character
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("myfile.txt","r");
    char ch= fgetc(fptr);
    printf("The character I read is %c",ch);
    ch= fgetc(fptr);
    printf("The character I read is %c",ch);
    fclose(fptr);
    return 0;
}

// how to read a string
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("myfile.txt","r");
    char str[100];
    fgets(str,7,fptr);
    printf("The character I read is %s",str);
    fclose(fptr);
    return 0;
}

// how to write a character
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("myfile.txt","w");
    char ch= fputc('A',fptr);
    printf("The character I read is %c",ch);
    fclose(fptr);
    return 0;
}

// how to write a string
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("myfile.txt","w");
    char str[100]= "Hello World";
    fputs(str,fptr);
    printf("The character I read is %s",str);
    fclose(fptr);
    return 0;
}

//how to append in file
// #include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("myfile.txt","a");
    char str[100]= " Hello World";
    fputs(str,fptr);
    printf("The character I read is %s",str);
    fclose(fptr);
    return 0;
}

// how to use r+ in a file
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("myfile.txt","r+");
    char str[100]= " Hello World";
    fputs(str,fptr);
    printf("The character I read is %s",str);
    fclose(fptr);
    return 0;
}

//how to use w+ in a file
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("myfile.txt","w+");
    char str[100]= " Hello aviral";
    fputs(str,fptr);
    printf("The character I read is %s",str);
    fclose(fptr);
    return 0;
}

//how to use a+ in a file
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("myfile.txt","a+");
    char str[100]= " welcome aviral";
    fputs(str,fptr);
    printf("The character I read is %s",str);
    fclose(fptr);
    return 0;
}