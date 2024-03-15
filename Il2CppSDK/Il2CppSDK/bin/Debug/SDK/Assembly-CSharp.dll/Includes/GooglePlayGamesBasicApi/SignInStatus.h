#pragma once
namespace GooglePlayGamesBasicApi {

class SignInStatus
{

	Success = 0,
	UiSignInRequired = 1,
	DeveloperError = 2,
	NetworkError = 3,
	InternalError = 4,
	Canceled = 5,
	AlreadyInProgress = 6,
	Failed = 7,
	NotAuthenticated = 8

};

}
