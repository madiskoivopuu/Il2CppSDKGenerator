#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveItemComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveItemComponent"));
	}

	template <typename R = Il2CppString*> R& EventName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& WaveIndex() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(WaveItemComponent*, Il2CppObject*))(Il2CppBase() + 0x112D940))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WaveItemComponent*, uintptr_t))(Il2CppBase() + 0x112D9E4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WaveItemComponent*, uintptr_t))(Il2CppBase() + 0x112DA80))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(WaveItemComponent*, Il2CppObject*))(Il2CppBase() + 0x112DAC8))(this, blueprintComponent);
	}

};

