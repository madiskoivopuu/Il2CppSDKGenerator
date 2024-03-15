#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeSyncDataForClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeSyncDataForClient"));
	}

	template <typename R = int64_t> R& Ticks() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& ServerTicks() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TimeSyncDataForClient*, uintptr_t))(Il2CppBase() + 0x14F0EB8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TimeSyncDataForClient*, uintptr_t))(Il2CppBase() + 0x14F0F0C))(this, reader);
	}

};

