#pragma once
namespace GooglePlayGamesBasicApiSavedGame {

class SavedGameRequestStatus
{

	Success = 1,
	TimeoutError = -1,
	InternalError = -2,
	AuthenticationError = -3,
	BadInputError = -4

};

}
