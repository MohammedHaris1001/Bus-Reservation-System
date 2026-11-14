#include "bus.h"
int admin_login()
{
	char password[100];
	char username[100];
	printf("enter username: ");
	scanf("%s",username);
	printf("enter password: ");
	scanf("%s",password);
	if(strcmp(username,"admin")==0 && (strcmp(password,"1234")==0))
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

