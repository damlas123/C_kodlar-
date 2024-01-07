#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	
    char name[25][50],temp[25];
    int n,i,j;
    printf("\n\n sorts the strings of an array using bubble sort:");
    
    printf("input number of string:");
	scanf("%d",&n);
	while (getchar() != '\n');
	printf("input your string:");
	for(i=0;i<n;i++){
		fgets(name[i],sizeof(name[i]),stdin);
	} 
    for(i=1;i<n;i++){
    	for(j=0;j<=n-i-1;j++){
    		if(strcmp(name[j],name[j+1])>0)
			{
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
 
 	}
    printf("your array after bubble sorting:\n");
    for(i=0;i<n;i++){
    	printf("%s\t",name[i]);
	}




	return 0;
}
