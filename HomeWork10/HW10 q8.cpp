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
    char newline[BUFFER_SIZE];
    int line, count;
    char str1;

    printf("Enter name of source file : ");
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

    printf("Enter line number to replace: ");
    scanf("%d", &line);
     fflush(stdin);

    printf("Replace '%d' line with: ", line);
    fgets(newline, BUFFER_SIZE, stdin);
    fPtr  = fopen(path, "r");
    
    fTemp = fopen("replace.tmp", "w"); 


    if (fPtr == NULL || fTemp == NULL)
    {
    
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_SUCCESS);
    }



    count = 0;
    while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {
        count++;

    
        if (count == line)
            fputs(newline, fTemp);
        else
            fputs(buffer, fTemp);
    }
    fclose(fPtr);
    fclose(fTemp);
  remove(path);
   rename("replace.tmp", path);

    printf("\nSuccessfully replaced '%d' line with '%s'.", line, newline);
    
    fPtr = fopen (path, "r"); 
	  
	cout <<"\n The content of the file "<<path <<   " \n" ;
	str1 = fgetc(fPtr);
	
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fPtr);
		}
    printf("\n\n");
     fclose(fPtr);

    return 0;
}

