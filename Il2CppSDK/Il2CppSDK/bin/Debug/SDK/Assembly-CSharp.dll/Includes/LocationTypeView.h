#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationTypeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationTypeView"));
	}

	template <typename T = uintptr_t> T& _typeLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Show(bool isPlayerKillLocation) {
		return ((T (*)(LocationTypeView*, bool))(Il2CppBase() + 0x171F2A0))(this, isPlayerKillLocation);
	}

};

}
