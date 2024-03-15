#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateBatteryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateBatteryData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& TargetDuration() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UpdateBatteryData*, uintptr_t))(Il2CppBase() + 0x153BACC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UpdateBatteryData*, uintptr_t))(Il2CppBase() + 0x153BB20))(this, reader);
	}

};

