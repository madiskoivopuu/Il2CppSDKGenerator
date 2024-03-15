#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICanTravelEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICanTravelEntity"));
	}


	template <typename R = bool> R get_CanTravel() {
		return ((R (*)(ICanTravelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_CanTravel(bool value) {
		return ((R (*)(ICanTravelEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

