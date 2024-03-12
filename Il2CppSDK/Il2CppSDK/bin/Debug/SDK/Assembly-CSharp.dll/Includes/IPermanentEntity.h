#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPermanentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPermanentEntity"));
	}


	template <typename T = uintptr_t> T get_permanent() {
		return ((T (*)(IPermanentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPermanent() {
		return ((T (*)(IPermanentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPermanent(bool newSaveOnDeath) {
		return ((T (*)(IPermanentEntity*, bool))(Il2CppBase() + 0x0))(this, newSaveOnDeath);
	}
	template <typename T = void> T ReplacePermanent(bool newSaveOnDeath) {
		return ((T (*)(IPermanentEntity*, bool))(Il2CppBase() + 0x0))(this, newSaveOnDeath);
	}
	template <typename T = void> T RemovePermanent() {
		return ((T (*)(IPermanentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
