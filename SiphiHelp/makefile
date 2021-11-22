
ofiles = Rocket.o RocketFactory.o Falcon9Factory.o FalconHeavyFactory.o Falcon9.o FalconHeavy.o Button.o  Command.o  Satellite.o Starlink.o TurnOff.o TurnOn.o Engine.o  EngineDecorator.o MerlinEngine.o VacuumMerlinEngine.o Main.o CargoDragonMaker.o CrewDragonMaker.o DroneShip.o Mission.o MissionStrategy.o RocketInitialState.o RocketLaunchState.o RocketNoState.o RocketStageOneState.o RocketState.o RocketStageTwoState.o RocketStaticFireState.o Satellite.o SpaceCommand.o StageOneLaunchState.o StageOneReadyState.o StageOneSeperationState.o StageOneTestState.o StageOneState.o StageOneLaunchState.o StageTwoReadyState.o StageTwoSeperationState.o  StageTwoState.o StageTwoLaunchState.o
gpp_o = g++ -c -std=c++11 -static

main: $(ofiles)
	g++ -std=c++11 -static $(ofiles) -o main

Main.o: Rocket.o RocketFactory.o Falcon9Factory.o FalconHeavyFactory.o Falcon9.o FalconHeavy.o Button.o  Command.o Satellite.o  TurnOff.o TurnOn.o Engine.o  EngineDecorator.o MerlinEngine.o VacuumMerlinEngine.o Main.o CargoDragonMaker.o CrewDragonMaker.o DroneShip.o Mission.o MissionStrategy.o RocketInitialState.o RocketLaunchState.o RocketNoState.o RocketStageOneState.o RocketState.o RocketStageTwoState.o RocketStaticFireState.o Satellite.o SpaceCommand.o StageOneLaunchState.o StageOneReadyState.o StageOneSeperationState.o StageOneTestState.o StageOneState.o StageOneLaunchState.o StageTwoReadyState.o StageTwoSeperationState.o  StageTwoState.o StageTwoLaunchState.o Starlink.o
	$(gpp_o) Main.cpp

Rocket.o: Rocket.h Rocket.cpp Engine.h EngineDecorator.h MerlinEngine.h VacuumMerlinEngine.h SpaceCommand.h RocketState.h RocketInitialState.h
	$(gpp_o) Rocket.cpp

RocketFactory.o: RocketFactory.h RocketFactory.cpp Rocket.h
	$(gpp_o) RocketFactory.cpp

Falcon9Factory.o: Falcon9Factory.h Falcon9Factory.cpp RocketFactory.h Rocket.h
	$(gpp_o) Falcon9Factory.cpp

FalconHeavyFactory.o: FalconHeavyFactory.h FalconHeavyFactory.cpp RocketFactory.h Rocket.h
	$(gpp_o) FalconHeavyFactory.cpp

Falcon9.o: Falcon9.h Falcon9.cpp Rocket.h TurnOn.h TurnOff.h Engine.h MerlinEngine.h VacuumMerlinEngine.h Satellite.h Starlink.h GroundReceiver.h RocketState.h RocketInitialState.h StageOneState.h StageOneReadyState.h StageTwoState.h StageTwoReadyState.h DroneShip.h
	$(gpp_o) Falcon9.cpp

FalconHeavy.o: FalconHeavy.h FalconHeavy.cpp Rocket.h TurnOn.h TurnOff.h Engine.h MerlinEngine.h VacuumMerlinEngine.h Satellite.h Starlink.h GroundReceiver.h RocketState.h RocketInitialState.h StageOneState.h StageOneReadyState.h StageTwoState.h StageTwoReadyState.h DroneShip.h
	$(gpp_o) FalconHeavy.cpp

Button.o: Button.h Button.cpp Command.h
	$(gpp_o) Button.cpp



Command.o: Command.h Command.cpp Rocket.h Engine.h
	$(gpp_o) Command.cpp


GroundReceiver.o: GroundReceiver.h GroundReceiver.cpp
	$(gpp_o) GroundReceiver.cpp

Satellite.o: Satellite.h Satellite.cpp
	$(gpp_o) Satellite.cpp



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

CargoDragonMaker.o: CargoDragonMaker.h CargoDragonMaker.cpp Dragon.h
	$(gpp_o) CargoDragonMaker.cpp

CrewDragonMaker.o: CrewDragonMaker.h CrewDragonMaker.cpp Dragon.h
	$(gpp_o) CrewDragonMaker.cpp

DroneShip.o: DroneShip.h DroneShip.cpp SpaceCommand.h
	$(gpp_o) DroneShip.cpp

Mission.o: Mission.h Mission.cpp Engine.h MissionStrategy.h
	$(gpp_o) Mission.cpp

MissionStrategy.o: MissionStrategy.h MissionStrategy.cpp Falcon9.h Falcon9Factory.h FalconHeavy.h FalconHeavyFactory.h RocketFactory.h Rocket.h Engine.h Dragon.h
	$(gpp_o) MissionStrategy.cpp

RocketInitialState.o: RocketInitialState.h RocketInitialState.cpp RocketState.h RocketStaticFireState.h
	$(gpp_o) RocketInitialState.cpp

RocketLaunchState.o: RocketLaunchState.h RocketLaunchState.cpp RocketState.h RocketStageOneState.h
	$(gpp_o) RocketLaunchState.cpp

RocketNoState.o: RocketNoState.h RocketNoState.cpp RocketState.h
	$(gpp_o) RocketNoState.cpp

RocketStageOneState.o: RocketStageOneState.h RocketStageOneState.cpp RocketState.h RocketStageTwoState.h
	$(gpp_o) RocketStageOneState.cpp

RocketState.o: RocketState.h RocketState.cpp
	$(gpp_o) RocketState.cpp

RocketStageTwoState.o: RocketStageTwoState.h RocketStageTwoState.cpp RocketState.h RocketLaunchState.h
	$(gpp_o) RocketStageTwoState.cpp

RocketStaticFireState.o: RocketStaticFireState.h RocketStaticFireState.cpp RocketState.h RocketLaunchState.h
	$(gpp_o) RocketStaticFireState.cpp

Satelite.o: Satellite.h Satellite.cpp GroundReceiver.h
	$(gpp_o) Satellite.cpp

SpaceCommand.o: SpaceCommand.h SpaceCommand.cpp
	$(gpp_o) SpaceCommand.cpp

StageOneLaunchState.o: StageOneLaunchState.h StageOneLaunchState.cpp StageOneState.h StageOneSeperationState.h
	$(gpp_o) StageOneLaunchState.cpp

StageOneReadyState.o: StageOneReadyState.h StageOneReadyState.cpp StageOneState.h StageOneTestState.h
	$(gpp_o) StageOneReadyState.cpp

StageOneSeperationState.o: StageOneSeperationState.h StageOneSeperationState.cpp	StageOneState.h
	$(gpp_o) StageOneSeperationState.cpp

StageOneState.o: StageOneState.h StageOneState.cpp
	$(gpp_o) StageOneState.cpp

StageOneTestState.o: StageOneTestState.h StageOneTestState.cpp StageOneState.h StageOneLaunchState.h
	$(gpp_o) StageOneTestState.cpp

StageTwoLaunchState.o: StageTwoLaunchState.h StageTwoLaunchState.cpp StageTwoState.h StageTwoSeperationState.h
	$(gpp_o) StageTwoLaunchState.cpp

StageTwoReadyState.o: StageTwoReadyState.h StageTwoReadyState.cpp StageTwoState.h StageTwoLaunchState.h
	$(gpp_o) StageTwoReadyState.cpp

StageTwoSeperationState.o: StageTwoSeperationState.h StageTwoSeperationState.cpp	StageTwoState.h
	$(gpp_o) StageTwoSeperationState.cpp

StageTwoState.o: StageTwoState.h StageTwoState.cpp
	$(gpp_o) StageTwoState.cpp


Starlink.o: Starlink.h Starlink.cpp Satellite.h GroundReceiver.h
	$(gpp_o) Starlink.cpp


run:  main
	./main

clean:
	rm *.o main
