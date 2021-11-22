ofiles = Main.o Engine.o EngineDecorator.o MerlinEngine.o VacuumMerlinEngine.o Command.o TurnOn.o TurnOff.o SpaceCommand.o DroneShip.o Button.o Starlink.o RocketState.o RocketNoState.o RocketStageTwoState.o RocketStageOneState.o RocketLaunchState.o RocketStaticFireState.o RocketInitialState.o Satellite.o GroundReceiver.o Rocket.o RocketFactory.o Falcon9Factory.o FalconHeavyFactory.o Falcon9.o FalconHeavy.o StageOneState.o StageOneSeperationState.o StageOneLaunchState.o StageOneTestState.o StageOneReadyState.o StageTwoState.o StageTwoSeperationState.o StageTwoLaunchState.o StageTwoReadyState.o CrewDragonMaker.o CargoDragonMaker.o MissionStrategy.o Mission.o
gpp_o = g++ -c -std=c++11 -static

main: $(ofiles)
	g++ -std=c++11 -static $(ofiles) -o main

Main.o: Main.cpp Engine.o EngineDecorator.o MerlinEngine.o VacuumMerlinEngine.o Command.o TurnOn.o TurnOff.o SpaceCommand.o DroneShip.o Button.o Starlink.o RocketState.o RocketNoState.o RocketStageTwoState.o RocketStageOneState.o RocketLaunchState.o RocketStaticFireState.o RocketInitialState.o Satellite.o GroundReceiver.o Rocket.o RocketFactory.o Falcon9Factory.o FalconHeavyFactory.o Falcon9.o FalconHeavy.o StageOneState.o StageOneSeperationState.o StageOneLaunchState.o StageOneTestState.o StageOneReadyState.o StageTwoState.o StageTwoSeperationState.o StageTwoLaunchState.o StageTwoReadyState.o CrewDragonMaker.o CargoDragonMaker.o MissionStrategy.o Mission.o
	$(gpp_o) Main.cpp

Engine.o: Engine.h Engine.cpp
	$(gpp_o) Engine.cpp

EngineDecorator.o: EngineDecorator.h EngineDecorator.cpp Engine.h
	$(gpp_o) EngineDecorator.cpp

MerlinEngine.o: MerlinEngine.h MerlinEngine.cpp EngineDecorator.h
	$(gpp_o) MerlinEngine.cpp

VacuumMerlinEngine.o: VacuumMerlinEngine.h VacuumMerlinEngine.cpp EngineDecorator.h
	$(gpp_o) VacuumMerlinEngine.cpp

Command.o: Command.h Command.cpp Engine.h Rocket.h
	$(gpp_o) Command.cpp

TurnOn.o: TurnOn.h TurnOn.cpp Command.h
	$(gpp_o) TurnOn.cpp

TurnOff.o: TurnOff.h TurnOff.cpp Command.h
	$(gpp_o) TurnOff.cpp

SpaceCommand.o: SpaceCommand.h SpaceCommand.cpp
	$(gpp_o) SpaceCommand.cpp

DroneShip.o: DroneShip.h DroneShip.cpp SpaceCommand.h
	$(gpp_o) DroneShip.cpp

Button.o: Button.h Button.cpp Command.h
	$(gpp_o) Button.cpp

Starlink.o: Starlink.h Starlink.cpp Satellite.h GroundReceiver.h
	$(gpp_o) Starlink.cpp

RocketState.o: RocketState.h RocketState.cpp
	$(gpp_o) RocketState.cpp

RocketNoState.o: RocketNoState.h RocketNoState.cpp RocketState.h
	$(gpp_o) RocketNoState.cpp

RocketStageTwoState.o: RocketStageTwoState.h RocketStageTwoState.cpp RocketState.h RocketNoState.h
	$(gpp_o) RocketStageTwoState.cpp

RocketStageOneState.o: RocketStageOneState.h RocketStageOneState.cpp RocketState.h RocketStageTwoState.h
	$(gpp_o) RocketStageOneState.cpp

RocketLaunchState.o: RocketLaunchState.h RocketLaunchState.cpp RocketState.h RocketStageOneState.h
	$(gpp_o) RocketLaunchState.cpp

RocketStaticFireState.o: RocketStaticFireState.h RocketStaticFireState.cpp RocketState.h RocketLaunchState.h
	$(gpp_o) RocketStaticFireState.cpp

RocketInitialState.o: RocketInitialState.h RocketInitialState.cpp RocketState.h RocketStaticFireState.h
	$(gpp_o) RocketInitialState.cpp

Satellite.o: Satellite.h Satellite.cpp GroundReceiver.h
	$(gpp_o) Satellite.cpp

GroundReceiver.o: GroundReceiver.h GroundReceiver.cpp Satellite.h
	$(gpp_o) GroundReceiver.cpp

Rocket.o: Rocket.h Rocket.cpp SpaceCommand.h RocketState.h RocketInitialState.h Engine.h EngineDecorator.h MerlinEngine.h VacuumMerlinEngine.h
	$(gpp_o) Rocket.cpp

RocketFactory.o: RocketFactory.h RocketFactory.cpp Rocket.h
	$(gpp_o) RocketFactory.cpp

Falcon9Factory.o: Falcon9Factory.h Falcon9Factory.cpp RocketFactory.h
	$(gpp_o) Falcon9Factory.cpp

FalconHeavyFactory.o: FalconHeavyFactory.h FalconHeavyFactory.cpp RocketFactory.h
	$(gpp_o) FalconHeavyFactory.cpp

Falcon9.o: Falcon9.h Falcon9.cpp Rocket.h TurnOn.h TurnOff.h Engine.h MerlinEngine.h VacuumMerlinEngine.h Satellite.h Starlink.h GroundReceiver.h RocketState.h RocketInitialState.h StageOneState.h StageOneReadyState.h StageTwoState.h StageTwoReadyState.h DroneShip.h
	$(gpp_o) Falcon9.cpp

FalconHeavy.o: FalconHeavy.h FalconHeavy.cpp Rocket.h TurnOn.h TurnOff.h Engine.h MerlinEngine.h VacuumMerlinEngine.h Satellite.h Starlink.h GroundReceiver.h RocketState.h RocketInitialState.h StageOneState.h StageOneReadyState.h StageTwoState.h StageTwoReadyState.h DroneShip.h
	$(gpp_o) FalconHeavy.cpp

StageOneState.o: StageOneState.h StageOneState.cpp
	$(gpp_o) StageOneState.cpp

StageOneSeperationState.o: StageOneSeperationState.h StageOneSeperationState.cpp StageOneState.h
	$(gpp_o) StageOneSeperationState.cpp

StageOneLaunchState.o: StageOneLaunchState.h StageOneLaunchState.cpp StageOneState.h StageOneSeperationState.h
	$(gpp_o) StageOneLaunchState.cpp

StageOneTestState.o: StageOneTestState.h StageOneTestState.cpp StageOneState.h StageOneLaunchState.h
	$(gpp_o) StageOneTestState.cpp

StageOneReadyState.o: StageOneReadyState.h StageOneReadyState.cpp StageOneState.h StageOneTestState.h
	$(gpp_o) StageOneReadyState.cpp

StageTwoState.o: StageTwoState.h StageTwoState.cpp
	$(gpp_o) StageTwoState.cpp

StageTwoSeperationState.o: StageTwoSeperationState.h StageTwoSeperationState.cpp StageTwoState.h
	$(gpp_o) StageTwoSeperationState.cpp

StageTwoLaunchState.o: StageTwoLaunchState.h StageTwoLaunchState.cpp StageTwoState.h StageTwoSeperationState.h
	$(gpp_o) StageTwoLaunchState.cpp

StageTwoReadyState.o: StageTwoReadyState.h StageTwoReadyState.cpp StageTwoState.h StageTwoLaunchState.h
	$(gpp_o) StageTwoReadyState.cpp

CrewDragonMaker.o: CrewDragonMaker.h CrewDragonMaker.cpp Dragon.h
	$(gpp_o) CrewDragonMaker.cpp

CargoDragonMaker.o: CargoDragonMaker.h CargoDragonMaker.cpp Dragon.h
	$(gpp_o) CargoDragonMaker.cpp

MissionStrategy.o: MissionStrategy.h MissionStrategy.cpp RocketFactory.h Rocket.h Engine.h Dragon.h
	$(gpp_o) MissionStrategy.cpp

Mission.o: Mission.h Mission.cpp Engine.h MissionStrategy.h
	$(gpp_o) Mission.cpp

run:  main
	./main

clean:
	rm *.o main



