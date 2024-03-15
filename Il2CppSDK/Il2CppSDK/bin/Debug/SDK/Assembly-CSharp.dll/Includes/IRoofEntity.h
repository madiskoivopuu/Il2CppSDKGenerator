#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRoofEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRoofEntity"));
	}


	template <typename R = RoofComponent*> R get_roof() {
		return ((R (*)(IRoofEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRoof() {
		return ((R (*)(IRoofEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRoof(int32_t newIndex) {
		return ((R (*)(IRoofEntity*, int32_t))(Il2CppBase() + 0x0))(this, newIndex);
	}
	template <typename R = void> R ReplaceRoof(int32_t newIndex) {
		return ((R (*)(IRoofEntity*, int32_t))(Il2CppBase() + 0x0))(this, newIndex);
	}
	template <typename R = void> R RemoveRoof() {
		return ((R (*)(IRoofEntity*))(Il2CppBase() + 0x0))(this);
	}

};

