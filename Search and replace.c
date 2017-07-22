// C search and replace program via raw input from user
// V 1.0

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main(){
	while(1){

		// input
		char block[100000];
		printf("Input: ");
		scanf("%s",block);
		int volume = strlen(block);

		// search
		char sw[100000];
		printf("\nSearch for: ");
		scanf("%s",sw);
		int len_sw = strlen(sw);

		// replace 
		char rw[100000];
		printf("\nReplace with: ");
		scanf("%s", rw);
		int len_rw = strlen(rw);

		// execution

		char *tmp = malloc(100000*sizeof(char));
		char *cur_b = block;
		char *cur_t = tmp;
		while(*cur_b){
			if (strncmp(sw,cur_b,len_sw) == 0){
				for (int i = 0; i < len_rw; i++){
					*cur_t = rw[i];
					cur_t++;
				}
				for (int j = 0; j < len_sw; j++){
					cur_b++;
				}
			}
			else{
				*cur_t = *cur_b;
				cur_t++;
				cur_b++;
			}
		}
		printf("\n%s\n",tmp);
		free(tmp);
	}
}
