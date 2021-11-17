ofiles = Engine.o  EngineDecorator.o MerlinEngine.o VacuumMerlinEngine.o Main.o
gpp_o = g++ -c -std=c++11 -static

main: $(ofiles)
	g++ -std=c++11 -static $(ofiles) -o main

Main.o: Main.cpp Engine.h EngineDecorator.h MerlinEngine.h VacuumMerlinEngine.h
	$(gpp_o) Main.cpp

Engine.o: Engine.h Engine.cpp
	$(gpp_o) Engine.cpp

EngineDecorator.o: EngineDecorator.h EngineDecorator.cpp Engine.h
	$(gpp_o) EngineDecorator.cpp

MerlinEngine.o: MerlinEngine.h MerlinEngine.cpp Engine.h EngineDecorator.h
	$(gpp_o) MerlinEngine.cpp

VacuumMerlineEngine.o: VacuumMerlinEngine.h VacuumMerlinEngine.cpp EngineDecorator.h Engine.h
	$(gpp_o) VacuumMerlinEngine.cpp

run:  main
	./main

clean:
	rm *.o main



