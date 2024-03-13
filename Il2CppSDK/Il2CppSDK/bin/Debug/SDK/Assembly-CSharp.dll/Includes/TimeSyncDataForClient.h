#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeSyncDataForClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeSyncDataForClient"));
	}

	template <typename T = int64_t> T& Ticks() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& ServerTicks() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TimeSyncDataForClient*, uintptr_t))(Il2CppBase() + 0x14F0EB8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TimeSyncDataForClient*, uintptr_t))(Il2CppBase() + 0x14F0F0C))(this, reader);
	}

};

