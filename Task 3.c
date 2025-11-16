#include<stdio.h>
void replace(char arr[3][3]){
	int i,j;
	
	for(i=0; i<3;i++){
		
		for(j=0; j<3; j++){
			if(arr[i][j] == 'a' || arr[i][j] == 'e' || arr[i][j] == 'i' || arr[i][j] == 'o' 
			|| arr[i][j] == 'u' || arr[i][j] == 'A' || arr[i][j] == 'E' || arr[i][j] == 'I' 
			|| arr[i][j] == 'O' || arr[i][j] == 'U'){
				arr[i][j] = '*';
			}
	
			
		}
	}
	
	return;		
}
int main(){
	char arr[3][3];
	int i,j;
	printf("Enter the alphabets.\n");
	for(i=0; i<3;i++){
		
		for(j=0; j<3; j++){
			printf("Enter alphabet [%d][%d] :",i+1 ,j+1);
			scanf(" %c" ,&arr[i][j]);
			
		}
	}
	replace(arr);
	printf("Updated array is:\n");
	for(i=0; i<3;i++){
		printf("\n");
		for(j=0; j<3; j++){
			printf("%c " ,arr[i][j]);
			
			
		}
	}
	
	return 0;
}

