#include<iostream>
using namespace std;
      int main() {
        FILE *fp1, *fp2;

        char filename[40];
        char c;
        int del_line, temp = 1;
      while(true){
	  
        cout <<"Enter file name  : ";
    
        cin >>filename;
        
         fp1 = fopen(filename, "r");
         
         
         if(fp1 ==NULL){
		cout << " Somrthing Wrong! you cant oprn that file\n";
		
	} 
         if(fp1 !=NULL){
		break;
   }}
   
      cout << "\n The content of this file " << filename << "is  :\n\n " ;
	
        c = fgetc(fp1);
        while (c != EOF){
    	printf("%c", c);
    	c = fgetc(fp1);

    }
 
        while (c != EOF) {
        	
          printf("%c", c);
       
          c = getc(fp1);
        }
        //rewind
        rewind(fp1);
        printf(" \n Enter number of the line to be deleted:");
       
        scanf("%d", &del_line);
     
        fp2 = fopen("copy.c", "w");
        c = getc(fp1);
        while (c != EOF) {
          c = getc(fp1);
          if (c == '\n')
          temp++;
        
          if (temp != del_line)
          {

            putc(c, fp2);
          }
        }
     
        fclose(fp1);
        fclose(fp2);
 
        remove(filename);

    rename("copy.c", filename);
        printf("\n The contents of file after being modified are as  follows:\n");
        fp1 = fopen(filename, "r");
        c = getc(fp1);
        while (c != EOF) {
            printf("%c", c);
            c = getc(fp1);
        }
        fclose(fp1);
        return 0;
      }
