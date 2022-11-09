EXEC=run
CC=g++
LD=-lGL -lGLU -lglut -lm
SOURCES=main.cpp StickMan.cpp Head.cpp Arm.cpp Torso.cpp Leg.cpp Point.cpp RelativePoint.cpp Articulation.cpp InnerArticulation.cpp
HEADERS=StickMan.hh Head.hh Arm.hh Torso.hh Leg.hh Point.hh RelativePoint.hh Articulation.hh InnerArticulation.hh
OBJECTS=main.o StickMan.o Head.o Arm.o Torso.o Leg.o Point.o RelativePoint.o Articulation.o InnerArticulation.o

$(EXEC): $(OBJECTS)
	@echo "Compiling Executable"
	@$(CC) -o $@ $(OBJECTS) $(LD)

clean:
	@echo "Cleaning Up"
	@rm -f *.o
	@rm -f $(EXEC)

re: clean $(EXEC)

%.o: %.cpp
	@echo "Compiling $<"
	@$(CC) -o $@ -c $^ $(LD)
