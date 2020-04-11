TARGET = bubble
CFLAG = -g

all: $(TARGET)

$(TARGET):  $(TARGET).o sort.o
	gcc $(CFLAG) -o $(TARGET) sort.o $(TARGET).o
sort.o:  $(TARGET).h sort.c
	gcc $(CFLAG) -c sort.c
$(TARGET).o:  $(TARGET).h $(TARGET).c
	gcc $(CFLAG) -c $(TARGET).c
clean:
	rm -f $(TARGET)
