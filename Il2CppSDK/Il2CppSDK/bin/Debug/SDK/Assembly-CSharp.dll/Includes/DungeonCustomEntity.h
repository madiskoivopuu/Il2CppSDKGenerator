#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonCustomEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonCustomEntity"));
	}

	template <typename T = bool> T& WithoutBlueprint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Data() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

