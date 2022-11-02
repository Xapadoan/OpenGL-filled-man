EXEC=run
CC=g++
LD=-lGL -lGLU -lglut -lm
SOURCES=main.cpp StickMan.cpp Head.cpp Arm.cpp Torso.cpp Leg.cpp
HEADERS=StickMan.hh Head.hh Arm.hh Torso.hh Leg.hh

$(EXEC): $(SOURCES) $(HEADERS)
	$(CC) -o $@ $(SOURCES) $(HEADERS) $(LD)

clean:
	rm -f *.o
	rm -f $(EXEC)

re:
	rm -f *.o
	rm -f $(EXEC)
	$(CC) -o $(EXEC) $(SOURCES) $(HEADERS) $(LD)
