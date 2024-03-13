#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateBatteryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateBatteryData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& TargetDuration() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UpdateBatteryData*, uintptr_t))(Il2CppBase() + 0x153BACC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UpdateBatteryData*, uintptr_t))(Il2CppBase() + 0x153BB20))(this, reader);
	}

};

