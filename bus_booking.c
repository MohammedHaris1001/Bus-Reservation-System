#include"bus.h"
void book_ticket(SLL**ptr)
{
	int busno,seat,i,j,flag=0,allocated_seat;
	SLL *temp=*ptr;
	printf("enter busno: ");
	scanf("%d",&busno);
	for(i=0;i<bus_count;i++)
	{
		if(buses[i].busno==busno)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("invalid bus no!\n");
		return;
	}
	for(j=1;j<=buses[i].total_seats;j++)
	{
		seat=1;
		temp=*ptr;
		while(temp)
		{
			if(temp->busno==busno && temp->seatno==j)
			{
				seat=0;
				break;
			}
			temp=temp->next;
		}
		if(seat==1)
		{
			allocated_seat=j;
			break;
		}
	}
	if(seat==0)
	{
		printf("Sorry no seats available on busno:%d\n",busno);
		return;
	}
	int ticket=1;
	while(1)
	{
		temp=*ptr;
		while(temp)
		{
			if(temp->ticketno==ticket)
				break;
				temp=temp->next;
		}
		if(temp==0)
			break;
			ticket++;
	}
	SLL *new=malloc(sizeof(SLL));
	new->busno=busno;
	new->ticketno=ticket;
	new->seatno=allocated_seat;
	strcpy(new->source,buses[i].source);
	strcpy(new->destination,buses[i].destination);
	printf("enter passenger name and age: ");
	scanf("%s%d",new->name,&new->age);
	if((*ptr==0)||(new->ticketno<((*ptr)->ticketno)))
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
		SLL *pos=*ptr;
		while((pos->next!=0)&&(new->ticketno>pos->next->ticketno))
			pos=pos->next;
			new->next=pos->next;
			pos->next=new;
	}
	printf("\n-----------------------------------\n");
	printf("     TICKET BOOKED SUCCESSFULLY      \n");
	printf("-------------------------------------\n");
	printf("ticketno:%d\n",new->ticketno);
	printf("passengername:%s\n",new->name);
	printf("age:%d\n",new->age);
	printf("busno:%d\n",new->busno);
	printf("seatno:%d\n",new->seatno);
	printf("route:%s to %s\n",new->source,new->destination);
	printf("-------------------------------------\n");


	
}
