#include <iostream>
#include <stdlib.h>

using namespace std;
  

int main()
{
	FILE *fptr;
	char fname[20];
	char str;

	cout<<"Input the filename to be opened : ";
	cin>>fname;
	fptr = fopen (fname, "r"); 
	 
	if (fptr == NULL)
	{
		cout<<"File does not exist or cannot be opened."<<endl;
		exit(0);
	}
	
	cout<<"The content of the file "<<fname<<" is  :"<<endl;
	str = fgetc(fptr);
	while (str != EOF)
		{
			cout<< str;
			str = fgetc(fptr);
		}
	fclose(fptr);

}
