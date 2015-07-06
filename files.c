/*
 ============================================================================
 Name        : files.c
 Author      :
 Description : Sequential file read and write, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>

void readEntireFile(void);
void readUntillMarker(char marker);
void writeToFile(void);

int main(void){
 //readEntireFile();
 //readUntilMarker("m");
  writeToFile();

 return EXIT_SUCCESS;

}
void readEntireFile(){
 int ch;
 FILE *fp;
 fp = fopen("C:/Users/ClionProjects/Csummer2/message", "r");
 ch = getc(fp);
 while (ch != EOF){
  putchar(ch);
  ch = getc(fp);
 }
 fclose(fp);

}
void readUntilMarker(char marker){
 int ch;
 FILE *fp;
 fp = fopen("C:/Users/ClionProjects/Csummer2/message", "r"); // Change to match your path
 ch = getc(fp);
 while (ch != marker){
  putchar(ch);
  ch = getc(fp);
 }
 fclose(fp);
}
void writeToFile(){
 FILE *fp;
 fp = fopen("C:/Users/ClionProjects/Csummer2/message2", "w");
 char name[10] = "Hello";
 fprintf(fp, "This is a message foe %s\n", name);
 fclose(fp);
}
