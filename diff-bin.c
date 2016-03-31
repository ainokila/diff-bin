//Get the difference of two binary files
//Name : diff-bin 
//Author : Cristian Velez Ruiz (ainokila)
//

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void help(){

	printf("diff-bin V 0.2\n\n");
	printf("Is a tool that lets you get the difference of two binary files,diff-bin automates the use of diff and xxd.");
	printf("If you do not have them installed , you must install them, but will not work.\n\n");
	printf("Use:\n\n");
	printf("diff-bin fileA fileB\n\n");
	printf("-or-\n\n");
	printf("diff-bin fileA fileB > file.diff\n\n");

}

//Temporary method to see if files exist
bool isFiles(char *a,char *b){

	FILE* inputA;
	FILE* inputB;
	bool sol = true;

	inputA=fopen (a,"r");

	if( inputA == NULL ){
		perror ("Error opening file in argv[1]");
		sol = false;
	}else{
		fclose(inputA);
	}

	inputB=fopen (b,"r");

	if( inputB == NULL ){
		perror ("Error opening file in argv[2]");
		sol = false;	
	}else{
		fclose(inputB);
	}

	return sol;

}

int main(int arg , char *argv[]){

	int success = -1;

	if ( arg != 3 ){
		help();
	}else{

		if(isFiles(argv[1],argv[2])){

			char *bufferA = (char*)malloc((strlen(argv[1])+40)*sizeof(char)) ;
			char *bufferB = (char*)malloc((strlen(argv[2])+40)*sizeof(char)) ;
			char bufferDiff[] = "diff -y /tmp/fileDiffB /tmp/fileDiffA";

			if(bufferA == NULL || bufferB == NULL ){
				perror ("Error to reserve memory");
				exit(-1);
			}

			sprintf (bufferA,"xxd %s > /tmp/fileDiffA",argv[1]);
			sprintf (bufferB,"xxd %s > /tmp/fileDiffB",argv[2]);

			system(bufferA);
			system(bufferB);
			system(bufferDiff);
			success = 0;

			//Clear the files
			system("rm /tmp/fileDiffA");
			system("rm /tmp/fileDiffB");

			free(bufferA);
			free(bufferB);

		}
		
	}
	return success;
}
