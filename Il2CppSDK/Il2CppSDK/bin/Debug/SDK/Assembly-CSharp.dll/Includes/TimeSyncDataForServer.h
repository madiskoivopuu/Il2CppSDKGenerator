#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeSyncDataForServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeSyncDataForServer"));
	}

	template <typename R = int64_t> R& Ticks() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TimeSyncDataForServer*, uintptr_t))(Il2CppBase() + 0x14F1010))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TimeSyncDataForServer*, uintptr_t))(Il2CppBase() + 0x14F1054))(this, reader);
	}

};

