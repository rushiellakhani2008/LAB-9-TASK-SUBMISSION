#include<stdio.h>
void store(int runs[11]);
void calculate(int runs[11], int *total, float *avg);
int main(){
	int runs[11];
	int total=0;
	float avg=0.0;
	
	store(runs);
	calculate(runs,&total,&avg);
	
	return 0;
}

void store(int runs[11]){
	int i;
	for(i=0; i<11; i++){
		printf("Enter runs scored by player %d: ",i+1);
		scanf("%d",&runs[i]);
	}
}

void calculate(int runs[11], int *total, float *avg){
	int max=0;
	int player;
	int i;
	*total=0;
	*avg=0.0;
	for(i=0; i<11; i++){
		if(runs[i]>max){
			max = runs[i];
			player=i+1;
		}
		(*total)+=runs[i];
	}
	(*avg)=(*total)/11.0;
	printf("Player %d scored the highest runs %d",player,max);
}
