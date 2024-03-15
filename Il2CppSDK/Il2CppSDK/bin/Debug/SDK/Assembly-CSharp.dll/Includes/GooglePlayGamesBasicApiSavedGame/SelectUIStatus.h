#pragma once
namespace GooglePlayGamesBasicApiSavedGame {

class SelectUIStatus
{

	SavedGameSelected = 1,
	UserClosedUI = 2,
	InternalError = -1,
	TimeoutError = -2,
	AuthenticationError = -3,
	BadInputError = -4,
	UiBusy = -5

};

}
