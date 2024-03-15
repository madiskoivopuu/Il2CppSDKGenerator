#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPermanentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPermanentEntity"));
	}


	template <typename R = PermanentComponent*> R get_permanent() {
		return ((R (*)(IPermanentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPermanent() {
		return ((R (*)(IPermanentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPermanent(bool newSaveOnDeath) {
		return ((R (*)(IPermanentEntity*, bool))(Il2CppBase() + 0x0))(this, newSaveOnDeath);
	}
	template <typename R = void> R ReplacePermanent(bool newSaveOnDeath) {
		return ((R (*)(IPermanentEntity*, bool))(Il2CppBase() + 0x0))(this, newSaveOnDeath);
	}
	template <typename R = void> R RemovePermanent() {
		return ((R (*)(IPermanentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

