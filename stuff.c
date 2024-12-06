//andrew beltran, Alex Barajas, Alexander Clough //
//12/1/24//
//project final//

#include <stdio.h>
#define FILE_NAME1 "madlib1.txt"
#define FILE_NAME2 "madlib2.txt"
#define NUM_WORDS 6
#define MAX_LENGTH 50

void get_input_user(char words[][MAX_LENGTH]);
void display_madlib1(FILE* read1, char words[][MAX_LENGTH]);
void display_madlib2(FILE* read2, char words[][MAX_LENGTH]);

int main(){
	char words[NUM_WORDS][MAX_LENGTH];
	int options;

	FILE* read1;
	read1 = fopen(FILE_NAME1, "r");

	FILE* read2;
	read2 = fopen(FILE_NAME2, "r");

	if(read1 == NULL){
	        printf("Error: cannot open madlib1.txt\n");
        return 1;
}

    if(read2 == NULL){
        printf("Error: cannot open madlib2.txt\n");
        return 1;
    }    

    get_input_user(words);

do{
        printf("Which madlib.txt file do you wish to print: [1] for madlib1, [2] for madlib2: \n");
        scanf("%d", &options);

        if(options == 1) {
            display_madlib1(read1, words);
       
        }else if(options == 2) {
            display_madlib2(read2, words);
   
        }else {
        printf("Please enter 1 or 2.\n");
        
        }
        
}while (options != 1 && options != 2); 

	fclose(read1);
	fclose(read2);

	return 0;
}

void get_input_user(char words[][MAX_LENGTH]){

	printf("Please enter an adjective: \n");
	scanf("%s", words[0]);
	
	printf("Please enter a noun: \n");
	scanf("%s", words[1]);

	printf("Please enter another adjective: \n");
	scanf("%s", words[2]);	

	printf("Please enter a verb:  \n");
	scanf("%s", words[3]);

	printf("Please enter another verb:  \n");
	scanf("%s", words[4]);	

	printf("Please enter another adjective: \n");
	scanf("%s", words[5]);

	printf("Please enter another noun: \n");
	scanf("%s", words[6]);

	printf("\n");
}

void display_madlib1(FILE* read1, char words[][MAX_LENGTH]) {
 
    char letter;
    int i = 0;


while((letter = fgetc(read1)) != -1){
        
        switch (letter){
            
            case 'V':
                printf("%s", words[i]); 
                i++;
                break;

            case 'N':
                printf("%s", words[i]); 
                i++;
                break;

            case 'A':
                printf("%s", words[i]);  
                i++;
                break;

            default:
                putchar(letter);  
                break;
        }

        if(i >= NUM_WORDS){ 
            break;
        }
}
printf("\n");
}


void display_madlib2(FILE* read2, char words[][MAX_LENGTH]){

char letter;
int i = 0;

 
while((letter = fgetc(read2)) != -1) {

switch(letter){
 
            case 'V':
                printf("%s", words[i]);  
                i++;
                break;

            case 'N':
                printf("%s", words[i]);  
                i++;
                break;

            case 'A':
                printf("%s", words[i]);  
                i++;
                break;

            default:
                putchar(letter);  
                break;
        }

        if (i >= NUM_WORDS){
            break;
        }
}
printf("\n");
}

