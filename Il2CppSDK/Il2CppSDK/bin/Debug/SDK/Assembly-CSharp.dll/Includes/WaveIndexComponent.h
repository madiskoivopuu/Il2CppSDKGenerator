#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveIndexComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveIndexComponent"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& WavesCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(WaveIndexComponent*, Il2CppObject*))(Il2CppBase() + 0x112D7BC))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WaveIndexComponent*, uintptr_t))(Il2CppBase() + 0x112D858))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WaveIndexComponent*, uintptr_t))(Il2CppBase() + 0x112D8F4))(this, writer);
	}

};

