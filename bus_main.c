#include "bus.h"
struct bus buses[bus_count]={{100,"banglore","kochi",40},{101,"banglore","andra",45},{102,"banglore","chennai",50}};
int main()
{
	SLL *headptr=0;
	int op,op1,op2;
	while(1)
	{
		printf("\n------------------------------------------\n");
		printf("        BUS RESERVATION SYSTEM              \n");
		printf("--------------------------------------------\n");
		printf("1)admin login\n2)user login\n3)exit\n");
		scanf(" %d",&op);
		switch(op)
		{
			case 1:if(admin_login())
			       {
				       while(1)
				       {
					       printf("\n-------ADMIN MENU-------\n");
					       printf("1)display passenger details\n2)search route\n3)save records\n4)logout\n");
					       printf("enter choice: ");
					       scanf(" %d",&op1);
					       switch(op1)
					       {
						       case 1:display_passengers(headptr);break;
						       case 2:search_route();break;
						       case 3:savefile(headptr);break;
						       case 4:printf("Admin logged out\n");break;
						       default:printf("invalid choice\n");
					       }
					       if(op1==4)break;
				       }
			       }break;
			case 2:if(user_login())
			       {
				       while(1)
				       {
					       printf("\n---------AVAILABLE BUSES---------\n");
					       for(int i=0;i<bus_count;i++)
					       {
						       printf("busno:%d\nsource:%s\ndestination:%s\ntotal seats:%d\n",buses[i].busno,buses[i].source,buses[i].destination,buses[i].total_seats);
					       }
					       printf("----------USER MENU----------\n");
					       printf("1)book ticket\n2)cancel ticket\n3)search route\n4)logout\n");
					       printf("enter choice: ");
					       scanf(" %d",&op2);
					       switch(op2)
					       {
						       case 1:book_ticket(&headptr);break;
						       case 2:cancel_ticket(&headptr);break;
					      	       case 3:search_route();break;
						       case 4:printf("user logged out\n");break;
						       default:printf("invalid choice\n");
					       }

					       if(op2==4)break;
				       }
			       }
			       break;
			case 3:exit(0);
		}
	}
}
