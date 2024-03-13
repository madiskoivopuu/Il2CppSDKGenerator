#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonCustomData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonCustomData"));
	}

	template <typename T = Il2CppString*> T& ComponentName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Data() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

