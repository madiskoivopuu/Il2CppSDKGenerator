#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class CommonTypesUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "CommonTypesUtil"));
	}


	template <typename T = bool> static T StatusIsSuccess(ResponseStatus* status) {
		return ((T (*)(void *, ResponseStatus*))(Il2CppBase() + 0xE2BAD4))(0, status);
	}

};

}
