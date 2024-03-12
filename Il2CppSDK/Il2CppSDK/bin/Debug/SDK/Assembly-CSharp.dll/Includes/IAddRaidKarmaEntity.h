#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAddRaidKarmaEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAddRaidKarmaEntity"));
	}


	template <typename T = uintptr_t> T get_addRaidKarma() {
		return ((T (*)(IAddRaidKarmaEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAddRaidKarma() {
		return ((T (*)(IAddRaidKarmaEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAddRaidKarma(int32_t newValue) {
		return ((T (*)(IAddRaidKarmaEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceAddRaidKarma(int32_t newValue) {
		return ((T (*)(IAddRaidKarmaEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveAddRaidKarma() {
		return ((T (*)(IAddRaidKarmaEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
