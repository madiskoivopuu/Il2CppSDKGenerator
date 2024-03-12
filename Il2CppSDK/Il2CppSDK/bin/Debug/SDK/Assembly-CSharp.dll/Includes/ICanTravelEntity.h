#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICanTravelEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICanTravelEntity"));
	}


	template <typename T = bool> T get_CanTravel() {
		return ((T (*)(ICanTravelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_CanTravel(bool value) {
		return ((T (*)(ICanTravelEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
