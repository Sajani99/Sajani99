#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20]="test.txt";
  char str1;
  
   
	cout<<"Input the number of lines to be written : ";
	cin>>n;
	cout<<":: The lines are ::"<<endl;
	fptr = fopen (fname,"w"); 
	for(i = 0; i < n+1;i++)
		{
		fgets(str, sizeof str, stdin);
		fputs(str, fptr);
		}
  fclose (fptr);
/*-------------- read the file -------------------------------------*/
	fptr = fopen (fname, "r");  
	cout<<"The content of the file "<<fname<<" is :"<<endl;
	str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			cout<<str1;
			str1 = fgetc(fptr);
		}
   
    fclose (fptr);
    return 0;
}

