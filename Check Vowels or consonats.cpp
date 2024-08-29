#include <stdio.h>
int main(){
	char c;
	printf("enter the character: ");
	scanf("%c", &c);
	int lowercaseVowel;
	int uppercaseVowel;
	lowercaseVowel = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	uppercaseVowel = (c=='A'||c=='E'||c=='I'||c=='O'|| c=='U');
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
		if(lowercaseVowel||uppercaseVowel){
			printf("%c is a vowel.\n",c);
		}
		else{
			printf("%c is a consonants. \n",c);		
		}
	}
	return 0;
}
