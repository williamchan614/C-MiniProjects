// C input program for unknown length for strings with fgets()
// V 1.0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	printf("Test\n");
	char buffer[25];
	char *input = NULL;
	int cur_len = 0;
	int max_size = 25;
	while (fgets(buffer,sizeof(char)*25,stdin)){
		int buff_len = strlen(buffer);
		max_size *= 2;
		char *tmp = realloc(input, max_size);
		if (tmp == NULL) break;
		input = tmp;
		strcpy(input + cur_len, buffer);
		cur_len += buff_len;
	}
	printf("%s\n",input);
	free(input);
}
