#include <stdio.h>
#include <stdlib.h>


	show(int *arr , int n );
int main(int argc, char *argv[]) {
	int n;
	printf("enter the size of your array:");
	scanf("%d",&n);
	int source_array[n];
	int des_array[n];
	int *source_ptr,*dest_ptr,*end;
	dest_ptr=des_array;
	source_ptr=source_array;
	int i;
	printf("enter the elements' your array:");
	for(i=0;i<n;i++){
		scanf("%d",(source_ptr+i));
	}
	end=&source_array[n-1];
	while(source_ptr<=end){
		*dest_ptr=*source_ptr;
		source_ptr++;
		dest_ptr++;
	}
    printf("\nthe source array before the copy:");
    show(source_array,n);
    dest_ptr=source_array;
    printf("\nthe destination array after the copy:");
    show(dest_ptr,n);
	return 0;
}
	show(int *arr , int n ){
		printf("the value:");
		int f;
		for(f=0;f<n;f++){
			printf("%d\t",*arr);
			arr++;
		}
	}
