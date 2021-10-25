#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#define BUFFER_SIZE 1000
using namespace std;

int main()
{
    
    FILE * fPtr1;
    FILE * fPtr2;
    FILE * fTemp;
    char path1[100];
    char path2[100];
    
    char buffer1[BUFFER_SIZE];
    char buffer2[BUFFER_SIZE];
    char str1;
    char str2;
    int count;
    

    printf("Enter source file name  : ");
    scanf("%s", path1);
     printf("Enter source file name  : ");
    scanf("%s", path2);

	   
     fflush(stdin);

    fPtr1  = fopen(path1, "r");
    
    fTemp = fopen("Merge.txt", "w"); 

   while ((fgets(buffer1, BUFFER_SIZE, fPtr1)) != NULL)
    {

           fputs(buffer1, fTemp);
    }
   fclose(fPtr1);
   
   
    fPtr2  = fopen(path2, "r");
     while ((fgets(buffer2, BUFFER_SIZE, fPtr2)) != NULL)
    {

           fputs(buffer2, fTemp);
    }
    fclose(fPtr2);
    fclose(fTemp);
     printf("Successfully merged into Merge.txt .\n");

    return 0;
}
