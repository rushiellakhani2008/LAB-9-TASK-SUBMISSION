#include <stdio.h>

void deposit (float *balances, int index, float amount);
void withdraw (float *balances, int index, float amount);
float avgbal (float *balances);

int main(){
	float balances[5] = {1000.0, 2000.0, 2563.2, 26148.23, 1200.3};
	int choice, acc;
	float amount;
	
	
	
	do{
		printf("====Bank Account managment====");
	    printf("\nEnter your choice.\n");
	    printf("\n1. for deposit.");
	    printf("\n2. for withdraw.");
	    printf("\n3. for average balance. ");
	    printf("\n4. for exit. \n");
	    scanf("%d", &choice);
	
	 switch(choice){
		case 1:
			printf("Enter amount for deposit :");
			scanf("%f" ,&amount);
			printf("Enter account number (0 - 4) :");
			scanf("%d", &acc);
			deposit(balances, acc, amount);
			break;
			
		case 2:
			printf("Enter amount for withdraw :");
			scanf("%f" ,&amount);
			printf("Enter account number (0 - 4) :");
			scanf("%d", &acc);
			withdraw(balances, acc, amount);
			break;
			
		case 3:
			printf("Average Balance = %.2f\n" ,avgbal(balances));
			
			break;
		case 4:
		    printf("\nExiting....");	
		    break;
		    
		default:
		    printf("\nInvalid choice.\n");
				
			
	 }
	}while(choice != 4);
	
	

		printf("\n~==Thank You==~\n");
		
    return 0;
}

void deposit (float *balances, int acc, float amount){
	if(acc <0 || acc >4){
		printf("Invalid account number.\n");
		return;
	}
	*(balances + acc) += amount;
	printf("Deposited successfuly.\n");
	return;
}

void withdraw (float *balances, int acc, float amount){
	if(*(balances + acc) < amount){
		printf("Insufficient balance.\n");
		return;
    } 
    if(acc <0 || acc >4){
		printf("Invalid account number.\n");
		return;
	}
	*(balances + acc) -= amount;
	printf("Successful withdrawl.");
	return;
}

float avgbal (float *balances){
	float sum = 0.0;
	int i;
	for (i=0; i<5; i++){
		sum += *(balances + i);
	}
	return sum/5;
}

