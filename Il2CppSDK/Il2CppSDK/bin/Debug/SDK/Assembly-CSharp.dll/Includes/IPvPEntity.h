#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPvPEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPvPEntity"));
	}


	template <typename T = uintptr_t> T get_pvP() {
		return ((T (*)(IPvPEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPvP() {
		return ((T (*)(IPvPEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPvP(int64_t newId) {
		return ((T (*)(IPvPEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplacePvP(int64_t newId) {
		return ((T (*)(IPvPEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemovePvP() {
		return ((T (*)(IPvPEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
