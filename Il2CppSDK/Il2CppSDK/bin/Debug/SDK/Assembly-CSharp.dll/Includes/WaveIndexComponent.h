#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveIndexComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveIndexComponent"));
	}

	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& WavesCount() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(WaveIndexComponent*, Il2CppObject*))(Il2CppBase() + 0x112D7BC))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WaveIndexComponent*, uintptr_t))(Il2CppBase() + 0x112D858))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WaveIndexComponent*, uintptr_t))(Il2CppBase() + 0x112D8F4))(this, writer);
	}

};

