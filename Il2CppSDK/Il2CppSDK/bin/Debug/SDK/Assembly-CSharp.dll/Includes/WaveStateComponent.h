#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveStateComponent"));
	}

	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& TotalCount() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(WaveStateComponent*, Il2CppObject*))(Il2CppBase() + 0x112DB88))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WaveStateComponent*, uintptr_t))(Il2CppBase() + 0x112DC2C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WaveStateComponent*, uintptr_t))(Il2CppBase() + 0x112DCF4))(this, writer);
	}

};

