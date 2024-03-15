#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICyclicYmirSoulEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICyclicYmirSoulEntity"));
	}


	template <typename R = CyclicYmirSoulComponent*> R get_cyclicYmirSoul() {
		return ((R (*)(ICyclicYmirSoulEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCyclicYmirSoul() {
		return ((R (*)(ICyclicYmirSoulEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(ICyclicYmirSoulEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(ICyclicYmirSoulEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicYmirSoul() {
		return ((R (*)(ICyclicYmirSoulEntity*))(Il2CppBase() + 0x0))(this);
	}

};

