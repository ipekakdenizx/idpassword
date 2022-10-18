#include <stdio.h>
int main() {
	char button,button2;//N or Y
	int ID,PIN;
	int temp_userID=2001;
	int temp_userPIN=1234;
	
	printf("Do you have an account?\n 'Y' or 'N'\n");
	scanf("%c",&button);
	
	if(button=='Y'){
		return 0;
	} else if(button=='N'){
		printf("Enter the user ID and PIN\n");
		scanf("%d%d",&ID,&PIN);
	if(ID==temp_userID  &&  PIN==temp_userPIN){
			printf(" 1.Withdraw\n 2.Deposit\n 3.View Balance\n 4.Press A to exit.\n");
           	  } else if(ID!=temp_userID || PIN!=temp_userPIN){
			  	printf("Invalid Credentials");
			  }
			}
return 0;
}

