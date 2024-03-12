#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WavesEventStatusData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WavesEventStatusData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& WavesCount() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& WaveIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ItemsTotalCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemsCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WavesEventStatusData*, uintptr_t))(Il2CppBase() + 0x112ED50))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WavesEventStatusData*, uintptr_t))(Il2CppBase() + 0x112EDE4))(this, reader);
	}

};

}
