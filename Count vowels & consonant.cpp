#include<stdio.h>
#include<ctype.h>
int main(){
	char str[100];
	int vowels= 0, consonant =0;
	printf("enter a string: ");
	fgets(str, sizeof(str), stdin);
	for(int i=0; str[i]!='\0'; i++){
		if(isalpha(str[i])){
			char ch = tolower(str[i]);
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
				vowels++;
			}
			else{
				consonant++;
			}
		}
	}
	printf("Number of vowels: %d\n", vowels);
	printf("Number of consonants: %d\n", consonant);
	return 0;
}
