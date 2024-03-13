#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesOurUtils {

class PlatformUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesOurUtils", "PlatformUtils"));
	}


	template <typename T = bool> static T get_Supported() {
		return ((T (*)(void *))(Il2CppBase() + 0x16F8EC0))(0);
	}

};

}
