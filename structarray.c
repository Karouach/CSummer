/*
 ============================================================================
 Name        : structarray.c
 Author      :
 Description : Using structures as complex variables, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


#define MAX_NAME_LENGTH  10  // Maximum name length
#define MAX_COLOR        10  // Maximum color length
#define MAX_TEAMS        10
#define MAX_NAMES        14
#define MAX_COLORS        4
#define MAX_AGE			120


 struct person {
   char firstName[MAX_NAME_LENGTH];
   char lastName[MAX_NAME_LENGTH];
   int age;
   char eyeColor[MAX_COLOR];
   int height;
 };

char bankOfFirstNames[MAX_NAMES][MAX_NAME_LENGTH] = {"Alesx", "Sandra", "Mio", "Sonia","Eric"};
char bankOfLastNames[MAX_NAMES][MAX_NAME_LENGTH] = {"Johnson", "staffansson", "davidsson", "Sanchez", "DIaz", "Elfasi","Newton","Gorbachev","Marinescu","Voltaire","Albertson","Lee","Chin","Kraft"};
char bankOfEyeColors[MAX_COLORS][MAX_COLOR] = {"green", "black", "brown", "blue"};

struct person teams[MAX_TEAMS];

void printStructure(void);
void populateArrayOfStructures(void);

int main(void){

  printStructure();
  populateArrayOfStructures();

 return EXIT_SUCCESS;

}
void populateArrayOfStructures(){
 srand(time(NULL));

 // Populate
 int i;
 for( i=0; i<MAX_TEAMS; i++){
  int rF = rand() % MAX_NAMES;
  int rL = rand() % MAX_NAMES;
  int rC = rand() % MAX_COLORS;
  strcpy(teams[i].firstName,bankOfFirstNames[rF]);
  strcpy(teams[i].lastName,bankOfLastNames[rL]);
  strcpy(teams[i].eyeColor,bankOfEyeColors[rC]);
  teams[i].age = rand() % MAX_AGE;
  teams[i].height = 4 + rand() % 3 + (rand() % 10)/10;
 }

}
void printStructure(void){
 // Print
 int i;
 for( i=0; i<MAX_TEAMS; i++){
  printf("First name:[%s] ",teams[i].firstName);
  printf("Last name:[%s] ",teams[i].lastName);
  printf("Age:[%d] ",teams[i].age);
  printf("Height:[%d] ",teams[i].height);
  printf("Eye color:[%s]\n",teams[i].eyeColor);
 }
}