#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRoofEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRoofEntity"));
	}


	template <typename T = uintptr_t> T get_roof() {
		return ((T (*)(IRoofEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRoof() {
		return ((T (*)(IRoofEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRoof(int32_t newIndex) {
		return ((T (*)(IRoofEntity*, int32_t))(Il2CppBase() + 0x0))(this, newIndex);
	}
	template <typename T = void> T ReplaceRoof(int32_t newIndex) {
		return ((T (*)(IRoofEntity*, int32_t))(Il2CppBase() + 0x0))(this, newIndex);
	}
	template <typename T = void> T RemoveRoof() {
		return ((T (*)(IRoofEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
