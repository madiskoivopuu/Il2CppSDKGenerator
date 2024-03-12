#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyBatteryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyBatteryData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SlotId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ApplyBatteryData*, uintptr_t))(Il2CppBase() + 0x18932A4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ApplyBatteryData*, uintptr_t))(Il2CppBase() + 0x1893308))(this, reader);
	}

};

}
