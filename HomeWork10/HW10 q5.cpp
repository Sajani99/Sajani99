#include <iostream>
#include <stdlib.h>

using namespace std;
#define FSIZE 100
 
int main()
{
    FILE *fptr;
    int ctr = 0;  
    char fname[FSIZE];
    char c; 
   
	cout<<"Input the file name to be opened : ";
	cin>>fname;

    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        cout<<"Could not open file"<<fname<<endl;
        return 0;
    }
    
    // Extract characters from file and store in character c
    
    for (c = getc(fptr); c != EOF; c = getc(fptr))
        if (c == '\n')                                      // Increment count if this character is newline
            ctr = ctr + 1;
    fclose(fptr);
    cout<<"The lines in the file"<<fname<<" are : "<<ctr<<endl;
    return 0;
}
