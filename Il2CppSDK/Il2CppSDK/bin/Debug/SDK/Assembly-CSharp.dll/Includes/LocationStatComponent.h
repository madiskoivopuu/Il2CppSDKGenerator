#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationStatComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationStatComponent"));
	}

	template <typename T = void*> T& Visits() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& PkOn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& PvPKills() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
