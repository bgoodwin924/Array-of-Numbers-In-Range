//Library
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
//main function 
int main(int argc,char *argv[]){

      //initialize random
      srand(time(NULL));
      //take in upper limit
      int lim=atoi(argv[2]);
      //create array
      int nums[10];
      int i;
      //take in amount to print
      int amount= atoi(argv[1]);
      
      //test inputs
      if(!isdigit(lim) && !isdigit(amount)){
	//printf("Here are your numbers\n");
  
	//puts number into the array
	for(i=0;i<10;i++){
	nums[i]= rand() % (lim+1);
	}
	//prints out numbers
	for(i=0;i<amount;i++){
	  printf("%d\n", nums[i]);
	}
      }else{
	printf("Enter in real numbers!\n");
      }

  //end program
  return 0;
}
