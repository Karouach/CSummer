/*
 ============================================================================
 Name        : filesaccessmodes.c
 Author      :
 Description : Use appropriate file access modes, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>

void copyFromSpurceToDestination(void);
void appendCopyRightNotice(void);


int main(void) {

  //copyFromSpurceToDestination();
  appendCopyRightNotice();

 return EXIT_SUCCESS;
}

void copyFromSpurceToDestination(){
 int ch;
 FILE *src, *dst;
 src = fopen("C:/Users/Ibtissam/ClionProjects/Csummer2/sourceFile", "r");
 dst = fopen("C:/Users/Ibtissam/ClionProjects/Csummer2/destinationFile", "w");
 ch = getc(src);
 while (ch != EOF){
  putc(ch, dst);
  ch = getc(src);

 }
 fclose(src);
 fclose(dst);
}
void appendCopyRightNotice(){
 FILE *fp;
 fp = fopen("C:/Users/Ibtissam/ClionProjects/Csummer2/sourceFile", "a"); // Change to match your path
 fprintf(fp,"\n\nCopyright 2015, X Company");

 fclose(fp);
}
