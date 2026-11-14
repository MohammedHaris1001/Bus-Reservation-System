bus: bus_main.o bus_booking.o bus_cancel.o display_passengers.o bus_save.o bus_admin.o bus_user.o bus_route.o
	cc bus_main.o bus_booking.o bus_cancel.o bus_save.o display_passengers.o bus_admin.o bus_user.o bus_route.o -o bus
bus_main.o:bus_main.c
	cc -c bus_main.c
bus_booking.o:bus_booking.c
	cc -c bus_booking.c
bus_cancel.o:bus_cancel.c
	cc -c bus_cancel.c
display_passengers.o:display_passengers.c
	cc -c display_passengers.c
bus_route.o:bus_route.c
	cc -c bus_route.c
bus_save.o:bus_save.c
	cc -c bus_save.c
bus_admin.o:bus_admin.c
	cc -c bus_admin.c
bus_user.o:bus_user.c
	cc -c bus_user.c
clear:
	@echo "cleaning up..."
	@rm -r *.o

