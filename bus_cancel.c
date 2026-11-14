#include"bus.h"
void cancel_ticket(SLL **ptr)
{
	int ticketno;
	printf("enter ticketno to delete\n");
	scanf("%d",&ticketno);
	SLL *del=*ptr,*prev;
	while(del)
	{
		if(ticketno==del->ticketno)
		{
			if(*ptr==del)
				*ptr=del->next;
			else
				prev->next=del->next;
				free(del);
				printf("ticket cancelled successfully\n");

				return;
		}
		prev=del;
		del=del->next;
	}
	printf("invalid ticketno\n");
}
