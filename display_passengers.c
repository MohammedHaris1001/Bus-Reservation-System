#include"bus.h"
void display_passengers(SLL *ptr)

{
	if(ptr==0)
	{
		printf("no tickets booked\n");
		return;
	}
	
	printf("%-10s %-20s %-5s %-6s %-6s %-25s\n","ticketno","passenger name","age","busno","seatno","route");
	printf("-----------------------------------------------------------------------------\n");
	while(ptr)
	{
		printf("%-10d %-20s %-5d %-6d %-6d %s->%s\n",ptr->ticketno,ptr->name,ptr->age,ptr->busno,ptr->seatno,ptr->source,ptr->destination);
		ptr=ptr->next;
	}
}
