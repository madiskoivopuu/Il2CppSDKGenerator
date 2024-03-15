#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class CommonTypesUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "CommonTypesUtil"));
	}


	template <typename R = bool> static R StatusIsSuccess(GooglePlayGamesBasicApi::ResponseStatus* status) {
		return ((R (*)(void *, GooglePlayGamesBasicApi::ResponseStatus*))(Il2CppBase() + 0xE2BAD4))(0, status);
	}

};

}
