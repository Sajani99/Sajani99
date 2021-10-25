#include <iostream>
#include <stdlib.h>

using namespace std;
  
int main()
{
   char str[1000];
   FILE *fptr;
   char fname[20]="test.txt";

   
   fptr=fopen(fname,"w");	
   if(fptr==NULL)
   {
      cout<<" Error in opening file!"<<endl;
      exit(1);
   }
   cout<<" Input a sentence for the file : ";
   fgets(str, sizeof str, stdin);
   fprintf(fptr,"%s",str);
   fclose(fptr);
 
   return 0;
}
