# Sean Kennedy smk170630

CXX = g++
CPPFLAGS = -Wall -g -I /scratch/perkins/include/
LDFLAGS = -L/scratch/perkins/lib/ -lcdk -lcurses

SRCS = example1.cc
OBJS = example1.o
TARGET = example1

all:	example1

clean:
	rm $(OBJS) $(TARGET)

example1: example1.o
	$(CXX) -o $@ $< $(LDFLAGS)

backup:
	@rm $(OBJS) $(TARGET) # No cleaning because I want the binary
	@mkdir -p ~/backups; chmod 700 ~/backups
	@$(eval CURDIRNAME := $(shell basename "`pwd`"))
	@$(eval MKBKUPNAME := ~/backups/$(TARGET)-$(shell date +'%Y.%m.%d-%H.%M.%S').tar.gz)
	@echo
	@echo Writing Backup file to: $(MKBKUPNAME)
	@echo
	@-tar zcfv $(MKBKUPNAME) ../$(CURDIRNAME) 2> /dev/null
	@chmod 600 $(MKBKUPNAME)
	@echo
	@echo Done!
