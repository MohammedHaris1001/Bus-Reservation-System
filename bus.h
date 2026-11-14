#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define bus_count 3
struct bus
{
	int busno;
	char source[100];
	char destination[100];
	int total_seats;
};
extern struct bus buses[bus_count];
typedef struct passenger
{
	int ticketno;
	char name[100];
	int age;
	int busno;
	int seatno;
	char source[100];
	char destination[100];
	struct passenger *next;
}SLL;

int admin_login();
int user_login();

void book_ticket(SLL **);
void cancel_ticket(SLL **);
void search_route();
void display_passengers(SLL *);
void savefile(SLL *);



