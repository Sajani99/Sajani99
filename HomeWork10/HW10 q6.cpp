#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    FILE *fptr; 
    char ch; 
    int wrd=1,charctr=1;
    char fname[20];
    
	cout<<"Input the filename to be opened : ";
	cin>>fname;    

    fptr=fopen(fname,"r"); 
    if(fptr==NULL) 
     { 
        cout<<"File does not exist or can not be opened."<<endl; 
      } 
    else 
        { 
          ch=fgetc(fptr); 
          cout<<"The content of the file "<<fname<<" are : "<<endl; 
          while(ch!=EOF) 
            { 
                cout<<ch; 
                if(ch==' '||ch=='\n')
                    { 
                        wrd++; 
                    }
                    else
                    {
                        charctr++; 
                    }
                ch=fgetc(fptr); 
            }
        cout<<"The number of words in the  file "<<fname<<" are : "<<wrd<<endl; 
        cout<<"The number of characters in the  file"<<fname<<" are :"<<charctr-1<<endl;         
        } 
    fclose(fptr); 
}

