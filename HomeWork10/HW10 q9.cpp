#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#define BUFFER_SIZE 1000
using namespace std;

int main()
{
    
    FILE * fPtr;
    FILE * fTemp;
    char path[100];
    
    char buffer[BUFFER_SIZE];
   
    char str1;
    int count;

    printf("Enter source file name  : ");
    scanf("%s", path);
    

	    fPtr  = fopen(path, "r"); 
	cout <<"\n The content of the file "<<path <<   " \n" ;
	str1 = fgetc(fPtr);
	
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fPtr);
		}
    printf("\n\n");
     fclose(fPtr);

 
    fflush(stdin);

    fPtr  = fopen(path, "r");
    
    fTemp = fopen("NewCopy.txt", "w"); 


    if (fPtr == NULL || fTemp == NULL)
    {
    
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_SUCCESS);
    }
  while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {

           fputs(buffer, fTemp);
    }


    fclose(fPtr);
    fclose(fTemp);
     printf("Successfully copied into NewCopy.txt .\n");

    return 0;
}

