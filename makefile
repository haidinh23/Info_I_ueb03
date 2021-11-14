CC = gcc -Wall -pedantic
PRG = ueb03
OBJ = ueb03.o

$(PRG): $(OBJ)
	$(CC) -o $@ $^
ueb01.o: ueb01.c
	$(CC) -c $<
clean: 
	rm -f $(OBJ) $(PRG)
run: 
	./$(PRG)
all: clean $(PRG) run
