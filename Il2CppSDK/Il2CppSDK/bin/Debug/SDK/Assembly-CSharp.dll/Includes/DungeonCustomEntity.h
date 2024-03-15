#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonCustomEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonCustomEntity"));
	}

	template <typename R = bool> R& WithoutBlueprint() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Data() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

