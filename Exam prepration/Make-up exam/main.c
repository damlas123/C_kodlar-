#include <stdio.h>
#include <stdlib.h>
int sum(int *student,int a);
int main(int argc, char *argv[]) {
	int studentno;
	printf("enter your student number:");
	scanf("%d",&studentno);
	int *array;
	array=(int *)malloc(15*sizeof(int));
	int i=0;
	while(i!=10){
		array[i]=studentno%10;
		studentno/=10;
	i++;
	}
    int f=sum(array,i-1);
    printf("the sum of number is:%d",f);
	return 0;
}
int sum(int *student,int a){
	int row=0,i=0,s=0,j;
	if(i<a){
		for(j=0;j<=a/2;j++){
			printf(" ");
		}
		if(row==0){
			printf("%d",student[row]);
			row++;
			s+=student[row];
			printf("\n");
			 return sum(student,a--);	
		}
		else if(row==1){
			printf("%d %2d",student[row],student[row+1]);
			if(student[row]>student[row+1]){
				s+=student[row];
			}
			else{
				s+=student[row+1];
			}
			row++;
			printf("\n");
			a=a-2;
		 return sum(student,a);	
		}
		else if(row==2){
			printf("%d %2d %2d",student[row+1],student[row+2],student[row+3]);
			if(student[row+1]>student[row+2]&& student[row+1]>student[row+3]){
				s+=student[row+1];
			}
			else if(student[row+1]<student[row+2]&& student[row+2]>student[row+3]){
				s+=student[row+2];
			}
		
			else {
				s+=student[row+3];
			}
			a=a-3;
			 return sum(student,a);	
			row++;
			printf("\n");
		}
			else if(row==3){
			printf("%d %2d %2d %2d",student[row+4],student[row+5],student[row+6],student[row+7]);
			if(student[row+4]>student[row+5]&& student[row+4]>student[row+6] && student[row+7]<student[row+4]){
				s+=student[row+4];
			}
			else if(student[row+5]<student[row+4]&& student[row+5]>student[row+6] && student[row+7]<student[row+5] ){
				s+=student[row+5];
			}
			else if(student[row+3]>student[row+2] && student[row+1]<student[row+3] && student[row+7]<student[row+6]){
				s+=student[row+6];
			}
			else {
				s+=student[row+7];
			}
			a=a-4;
			 return sum(student,a)	;
			printf("\n");
		}
	
	}
	else{
		return s;
	}
}
