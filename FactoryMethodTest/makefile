
ofiles = Rocket.o RocketFactory.o Falcon9Factory.o FalconHeavyFactory.o Falcon9.o FalconHeavy.o Main.o Engine.o EngineDecorator.o MerlinEngine.o VacuumMerlinEngine.o
gpp_o = g++ -c -std=c++11 -static

main: $(ofiles)
	g++ -std=c++11 -static $(ofiles) -o main

Main.o: Main.cpp Rocket.h RocketFactory.h Falcon9Factory.h FalconHeavyFactory.h Falcon9.h FalconHeavy.h
	$(gpp_o) Main.cpp

Rocket.o: Rocket.h Rocket.cpp Engine.h EngineDecorator.h MerlinEngine.h VacuumMerlinEngine.h
	$(gpp_o) Rocket.cpp

RocketFactory.o: RocketFactory.h RocketFactory.cpp Rocket.h
	$(gpp_o) RocketFactory.cpp

Falcon9Factory.o: Falcon9Factory.h Falcon9Factory.cpp RocketFactory.h Rocket.h
	$(gpp_o) Falcon9Factory.cpp

FalconHeavyFactory.o: FalconHeavyFactory.h FalconHeavyFactory.cpp RocketFactory.h Rocket.h
	$(gpp_o) FalconHeavyFactory.cpp

Falcon9.o: Falcon9.h Falcon9.cpp Rocket.h
	$(gpp_o) Falcon9.cpp

FalconHeavy.o: FalconHeavy.h FalconHeavy.cpp Rocket.h
	$(gpp_o) FalconHeavy.cpp

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
