#include"bus.h"
void search_route()
{
	char s[50];
	char d[50];
	int i,flag=0;
	printf("enter source and dest\n");
	scanf("%s%s",s,d);
	printf("%-10s %-20s %-20s %-12s\n","busno","source","destination","total seats");
	for(i=0;i<bus_count;i++)
	{
		if((strcmp(buses[i].source,s)==0) && (strcmp(buses[i].destination,d)==0))
		{
			printf("%-10d %-20s %-20s %-12d\n",buses[i].busno,buses[i].source,buses[i].destination,buses[i].total_seats);
			flag=1;
		}

	}
	if(flag==0)
			printf("no buses for the route\n");
}

