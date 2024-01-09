#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char sentence[100],word[10][10];
	int a=0,j=0,i;
	gets(sentence);
	while(sentence[i]){
		if(sentence[i]=='\0' || sentence[i]==' '){
			word[a][j]='\0';
			a++;
			j=0;
		}
		else{
			word[a][j]=sentence[i];
			j++;
		}
		i++;
	}
for(i=0;i<a;i++){
	printf("%s\n",word[i]);
}
	return 0;
}
