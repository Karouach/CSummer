/*
 ============================================================================
 Name        : struct.c
 Author      :
 Description : Declaring and accessing structures, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define MAX_NAME 30
#define MAX_COLOR 15


 struct person {
   char firstName[MAX_NAME];
   char lastName[MAX_NAME];
   int age;
   char eyeColor[MAX_NAME];
   float height;
 };

 void printStruct (struct person individual);

int main(void){
 struct person citizen;
 citizen.age = 38;
 citizen.height = 5.9;
 strcpy(citizen.lastName, "Johansson");
 strcpy(citizen.firstName, "Sasha");
 strcpy(citizen.eyeColor, "green");

 printStruct(citizen);


 return EXIT_SUCCESS;

}
void printStruct(struct person individual){
 printf("First Name is:  %s\n", individual.firstName);
 printf("Last Name is:  %s\n", individual.lastName);
 printf("Age is:  %d\n", individual.age);
 printf("Height:  %1f\n", individual.height);
 printf("Eye Color:  %s\n", individual.eyeColor);
}
