
ofiles = Rocket.o RocketFactory.o Falcon9Factory.o FalconHeavyFactory.o Falcon9.o FalconHeavy.o Button.o CargoDragon.o Command.o CrewDragon.o Dragon.o Satellite.o Starlink.o TurnOff.o TurnOn.o Engine.o  EngineDecorator.o MerlinEngine.o VacuumMerlinEngine.o Main.o
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




Button.o: Button.h Button.cpp Command.h
	$(gpp_o) Button.cpp

CargoDragon.o: CargoDragon.h CargoDragon.cpp Dragon.h
	$(gpp_o) CargoDragon.cpp

Command.o: Command.h Command.cpp Rocket.h
	$(gpp_o) Command.cpp

CrewDragon.o: CrewDragon.h CrewDragon.cpp Dragon.h
	$(gpp_o) CrewDragon.cpp

Dragon.o: Dragon.h Dragon.cpp
	$(gpp_o) Dragon.cpp

GroundReceiver.o: GroundReceiver.h GroundReceiver.cpp
	$(gpp_o) GroundReceiver.cpp

Satellite.o: Satellite.h Satellite.cpp
	$(gpp_o) Satellite.cpp

Starlink.o: Starlink.h Starlink.cpp Satellite.h
	$(gpp_o) Starlink.cpp

TurnOff.o: TurnOff.h TurnOff.cpp Command.h
	$(gpp_o) TurnOff.cpp

TurnOn.o: TurnOn.h TurnOn.cpp Command.h
	$(gpp_o) TurnOn.cpp
	
	
	
	
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
