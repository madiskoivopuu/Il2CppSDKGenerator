#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeSyncDataForServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeSyncDataForServer"));
	}

	template <typename T = int64_t> T& Ticks() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TimeSyncDataForServer*, uintptr_t))(Il2CppBase() + 0x14F1010))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TimeSyncDataForServer*, uintptr_t))(Il2CppBase() + 0x14F1054))(this, reader);
	}

};

}
