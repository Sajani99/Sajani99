#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

#define LSIZ 128   //column size
#define RSIZ 10    //row size

int main() 
{
    char line[RSIZ][LSIZ];
	char fname[20];
    FILE *fptr = NULL; 
    int i = 0;
    int tot = 0;

   
	cout<<"Input the filename to be opened : ";
    cin>>fname;	

    fptr = fopen(fname, "r");
    while(fgets(line[i], LSIZ, fptr)) 
	{
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    tot = i;
	cout<<"The content of the file"<<fname<<" are : ";    
    for(i = 0; i < tot; ++i)
    {
        cout<<line[i];
    }
    fclose(fptr);
    return 0;
}
