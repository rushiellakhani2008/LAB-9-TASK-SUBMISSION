#include <stdio.h>
void bed(int beds[3][5]){
    int count =0;
    int i,j;
   
   
for (i=0; i<3; i++){
    if(i == 0){
      printf("Enter the bed status for beds in General ward \n:");
    }
    else if(i == 1){
      printf("Enter the bed status for beds in ICU ward \n:");
    }
    else if(i == 2){
      printf("Enter the bed status for beds in Private ward \n:");
    }
   
   
for (j=0; j<5; j++){
printf("Bed [%d][%d] :",i ,j);
scanf("%d", &beds[i][j]);
if(beds[i][j] == 1){
   count++;
}
}
}
int counter = 15 - count;
printf("%d Beds are occupied while %d Beds are available.",count , counter);

}

int main(){
    int beds[3][5];
          printf("Enter the bed status (1 for occupied, 0 for empty)\n");
     bed(beds);
 
return 0;
}

