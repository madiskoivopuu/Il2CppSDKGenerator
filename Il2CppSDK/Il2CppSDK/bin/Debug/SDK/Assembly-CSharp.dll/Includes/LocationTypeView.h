#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationTypeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationTypeView"));
	}

	template <typename R = uintptr_t> R& _typeLabel() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Show(bool isPlayerKillLocation) {
		return ((R (*)(LocationTypeView*, bool))(Il2CppBase() + 0x171F2A0))(this, isPlayerKillLocation);
	}

};

