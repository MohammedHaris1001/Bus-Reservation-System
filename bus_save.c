#include"bus.h"
void savefile(SLL *ptr)
{
	FILE *fp=fopen("passengers.txt","w");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}
	while(ptr)
	{
		fprintf(fp,"%d %d %d %d  %s %s %s\n",ptr->ticketno,ptr->busno,ptr->seatno,ptr->age,ptr->name,ptr->source,ptr->destination);
		ptr=ptr->next;
	}
	fclose(fp);
	printf("\nsuccessfully saved\n");
}
