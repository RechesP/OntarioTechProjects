CC = g++
CFLAGS = -std=c++11

SMAIN = main.cpp
SFILE = file.cpp
OMAIN = main.o
OFILE = file.o
EXEC = output

all: $(EXEC)

$(EXEC): $(OMAIN) $(OFILE)
	$(CC) $(CFLAGS) $(OMAIN) $(OFILE) -o $(EXEC)
    
$(OMAIN): $(SMAIN)
	$(CC) -c $(SMAIN)

$(OFILE): $(SFILE)
	$(CC) -c $(SFILE)

clean:
	rm -f *.o $(EXEC)