/*
 ============================================================================
 Name        : files.c
 Author      :
 Description : Data management using random access files, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>



void copyFromSourceToDestination(void);
void appendCopyrightNotice(void);

int main(void) {

 copyFromSourceToDestination();
 //appendCopyrightNotice();

 return EXIT_SUCCESS;
}

void copyFromSourceToDestination(){
   int ch;
   FILE *src, *dest;
   src = fopen("path","r");
   dest = fopen("path","w");
   ch = getc(src);
     while (ch != EOF){
       putc(ch, dest);
       ch = getc(src);
     }
   fclose(src);
   fclose(dest);
}

void appendCopyrightNotice(){
    FILE *fp;
    fp = fopen("path", "a"); // Change to match your path
    fprintf(fp,"\nCopyright 2015, test");
    fclose(fp);
}
