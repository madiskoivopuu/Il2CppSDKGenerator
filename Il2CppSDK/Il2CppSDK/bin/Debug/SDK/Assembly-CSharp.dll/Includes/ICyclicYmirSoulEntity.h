#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICyclicYmirSoulEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICyclicYmirSoulEntity"));
	}


	template <typename T = uintptr_t> T get_cyclicYmirSoul() {
		return ((T (*)(ICyclicYmirSoulEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCyclicYmirSoul() {
		return ((T (*)(ICyclicYmirSoulEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(ICyclicYmirSoulEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(ICyclicYmirSoulEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicYmirSoul() {
		return ((T (*)(ICyclicYmirSoulEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
