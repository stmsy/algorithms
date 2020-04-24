TARGET = stack
CFLAG = -g

all: $(TARGET)

$(TARGET):  $(TARGET).o main.o
	gcc $(CFLAG) -o $(TARGET) main.o $(TARGET).o
main.o:  $(TARGET).h main.c
	gcc $(CFLAG) -c main.c
$(TARGET).o:  $(TARGET).h $(TARGET).c
	gcc $(CFLAG) -c $(TARGET).c
clean:
	rm -f $(TARGET)
