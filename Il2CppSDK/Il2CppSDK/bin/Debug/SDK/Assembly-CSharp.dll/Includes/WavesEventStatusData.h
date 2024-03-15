#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WavesEventStatusData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WavesEventStatusData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& WavesCount() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& WaveIndex() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& ItemsTotalCount() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = int32_t> R& ItemsCount() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WavesEventStatusData*, uintptr_t))(Il2CppBase() + 0x112ED50))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WavesEventStatusData*, uintptr_t))(Il2CppBase() + 0x112EDE4))(this, reader);
	}

};

