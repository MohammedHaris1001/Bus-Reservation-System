#include "bus.h"
int user_login()
{
	char username[100];
	char password[100];
	printf("enter username: ");
	scanf("%s",username);
	printf("enter password: ");
	scanf("%s",password);
	if(strcmp(username,"user")==0 && (strcmp(password,"4321")==0))
	{
		printf("login successfull\n");
		return 1;
	}
	else
	{
		printf("invalid username or password\n");
		return 0;
	}
}


