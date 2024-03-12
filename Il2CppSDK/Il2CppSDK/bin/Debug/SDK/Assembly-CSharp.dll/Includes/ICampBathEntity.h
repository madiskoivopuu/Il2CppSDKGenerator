#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICampBathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICampBathEntity"));
	}


	template <typename T = uintptr_t> T get_campBath() {
		return ((T (*)(ICampBathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCampBath() {
		return ((T (*)(ICampBathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCampBath(Il2CppArray<uintptr_t>* newFuel, float newMaxWorkTime) {
		return ((T (*)(ICampBathEntity*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x0))(this, newFuel, newMaxWorkTime);
	}
	template <typename T = void> T ReplaceCampBath(Il2CppArray<uintptr_t>* newFuel, float newMaxWorkTime) {
		return ((T (*)(ICampBathEntity*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x0))(this, newFuel, newMaxWorkTime);
	}
	template <typename T = void> T RemoveCampBath() {
		return ((T (*)(ICampBathEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
