// Friendly Robot

#include <stdio.h>
#include <string.h>

int main(){
	printf("Hello! Welcome to this program!\n");
	printf("What is your name?:\n");
	char name[101];
	scanf("%s",name);
	printf("Hello there %s\n!",name);
	printf("Goodbye %s\n!",name);
}