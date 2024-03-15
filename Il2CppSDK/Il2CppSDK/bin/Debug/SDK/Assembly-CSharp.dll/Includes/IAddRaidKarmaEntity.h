#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAddRaidKarmaEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAddRaidKarmaEntity"));
	}


	template <typename R = AddRaidKarmaComponent*> R get_addRaidKarma() {
		return ((R (*)(IAddRaidKarmaEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAddRaidKarma() {
		return ((R (*)(IAddRaidKarmaEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAddRaidKarma(int32_t newValue) {
		return ((R (*)(IAddRaidKarmaEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceAddRaidKarma(int32_t newValue) {
		return ((R (*)(IAddRaidKarmaEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveAddRaidKarma() {
		return ((R (*)(IAddRaidKarmaEntity*))(Il2CppBase() + 0x0))(this);
	}

};

