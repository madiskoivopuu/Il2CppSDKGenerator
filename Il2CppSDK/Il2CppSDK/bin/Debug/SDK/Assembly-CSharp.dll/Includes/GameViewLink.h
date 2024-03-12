#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameViewLink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameViewLink"));
	}

	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& viewObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
