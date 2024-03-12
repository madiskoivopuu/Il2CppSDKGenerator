#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILoader"));
	}


	template <typename T = void> T Load(Il2CppString* sceneName, uintptr_t onLoadFinished) {
		return ((T (*)(ILoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, sceneName, onLoadFinished);
	}

};

}
