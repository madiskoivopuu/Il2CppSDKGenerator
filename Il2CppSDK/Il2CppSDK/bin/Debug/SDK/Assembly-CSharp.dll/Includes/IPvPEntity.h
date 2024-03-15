#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPvPEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPvPEntity"));
	}


	template <typename R = PvPComponent*> R get_pvP() {
		return ((R (*)(IPvPEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPvP() {
		return ((R (*)(IPvPEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPvP(int64_t newId) {
		return ((R (*)(IPvPEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplacePvP(int64_t newId) {
		return ((R (*)(IPvPEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemovePvP() {
		return ((R (*)(IPvPEntity*))(Il2CppBase() + 0x0))(this);
	}

};

