#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveStateComponent"));
	}

	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& TotalCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(WaveStateComponent*, uintptr_t))(Il2CppBase() + 0x112DB88))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WaveStateComponent*, uintptr_t))(Il2CppBase() + 0x112DC2C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WaveStateComponent*, uintptr_t))(Il2CppBase() + 0x112DCF4))(this, writer);
	}

};

}
