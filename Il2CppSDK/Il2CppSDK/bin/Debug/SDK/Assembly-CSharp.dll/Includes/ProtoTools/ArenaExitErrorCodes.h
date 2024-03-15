#pragma once
namespace ProtoTools {

class ArenaExitErrorCodes
{

	ExitOk = 0,
	CoordinatorNotFoundInConnect = 1,
	CoordinatorNotFoundInCheckStatus = 2,
	ArenaCrash = 3,
	ArenaRestartByRequestCoordinator = 4,
	ArenaShutdownByRequestCoordinator = 5

};

}
