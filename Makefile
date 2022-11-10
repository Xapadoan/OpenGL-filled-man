EXEC=run
CC=g++
LD=-lGL -lGLU -lglut -lm -iquote Man -iquote Geometry -iquote Map
OBJECTS=main.o\
	Man/Man.o Man/Head.o Man/Articulation.o Man/Torso.o Man/Arm.o Man/Leg.o Man/InnerArticulation.o\
	Geometry/Point.o Geometry/RelativePoint.o\
	Map/Map.o

$(EXEC): $(OBJECTS)
	@echo "Compiling Executable"
	@$(CC) -o $@ $(OBJECTS) $(LD)

clean:
	@echo "Cleaning Up"
	@rm -f *.o Map/*.o Man/*.o Geometry/*.o
	@rm -f $(EXEC)

re: clean $(EXEC)

# MAIN DIR
main.o: main.cpp main.hh
	@echo "Compiling $@"
	@$(CC) -o $@ -c $< $(LD)

# MAN DIR
Man/Man.o: Man/Man.cpp Man/Man.hh
Man/Head.o: Man/Head.cpp Man/Head.hh
Man/Articulation.o: Man/Articulation.cpp Man/Articulation.hh
Man/Torso.o: Man/Torso.cpp Man/Torso.hh
Man/Arm.o: Man/Arm.cpp Man/Arm.hh
Man/Leg.o: Man/Leg.cpp Man/Leg.hh
Man/Torso.o: Man/Torso.cpp Man/Torso.hh
%.o: %.cpp %.hh
	@echo "Compiling $@"
	@$(CC) -o $@ -c $< $(LD)

# GEOMETRY DIR
Geometry/Point.o: Geometry/Point.cpp Geometry/Point.hh
Geometry/RelativePoint.o: Geometry/RelativePoint.cpp Geometry/RelativePoint.hh
%.o: %.cpp %.hh
	@echo "Compiling $@"
	@$(CC) -o $@ -c $< $(LD)

# MAP DIR
Map/Map.o: Map/Map.cpp Map/Map.hh
%.o: %.cpp %.hh
	@echo "Compiling $@"
	@$(CC) -o $@ -c $< $(LD)
