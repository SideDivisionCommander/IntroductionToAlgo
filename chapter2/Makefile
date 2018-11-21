CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g -std=c++11
LDFLAGS=
LDLIBS=

SRCS=2-1-2.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all:target

target:$(OBJS)
	$(CXX) $(LDFLAGS) $(CPPFLAGS) -o alg2-1-2.bin $(OBJS) $(LDLIBS)

2-1-2.o:2-1-2.cpp

clean:
	$(RM) $(OBJS)

distclean:clean
	$(RM) alg2-1-2.bin
