#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonMarkerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonMarkerData"));
	}

	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
