#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char *operators={"=", "<", ">", "<=", ">="};
//operators[5]='=';


int main()
{
    Lab1();
}

void Lab1(){
    FILE *fp;
    // Initialized a File Pointer

    fp=fopen("C:\\Users\\Koushik\\Desktop\\Assignment_1\\input.txt", "R+");

   printf("%s", operators[1]);


}

