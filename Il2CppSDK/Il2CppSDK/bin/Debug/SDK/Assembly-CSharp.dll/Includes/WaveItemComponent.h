#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveItemComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveItemComponent"));
	}

	template <typename T = Il2CppString*> T& EventName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& WaveIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(WaveItemComponent*, Il2CppObject*))(Il2CppBase() + 0x112D940))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WaveItemComponent*, uintptr_t))(Il2CppBase() + 0x112D9E4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WaveItemComponent*, uintptr_t))(Il2CppBase() + 0x112DA80))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(WaveItemComponent*, Il2CppObject*))(Il2CppBase() + 0x112DAC8))(this, blueprintComponent);
	}

};

