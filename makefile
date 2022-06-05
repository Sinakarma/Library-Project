OBJS	= CreationLivres.o library.o Test.o
SOURCE	= CreationLivres.c library.c Test.c
HEADER	= 
OUT	= 
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

CreationLivres.o: CreationLivres.c
	$(CC) $(FLAGS) CreationLivres.c 

library.o: library.c
	$(CC) $(FLAGS) library.c 

Test.o: Test.c
	$(CC) $(FLAGS) Test.c 


clean:
	rm -f $(OBJS) $(OUT)
