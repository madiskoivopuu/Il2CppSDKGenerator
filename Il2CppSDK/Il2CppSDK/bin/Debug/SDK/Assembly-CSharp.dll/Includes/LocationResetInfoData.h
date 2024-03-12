#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationResetInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetInfoData"));
	}

	template <typename T = int64_t> T& ResetTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& CoolDownTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ResetCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CurrencyType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LocationResetInfoData*, uintptr_t))(Il2CppBase() + 0x171E274))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LocationResetInfoData*, uintptr_t))(Il2CppBase() + 0x171E2F8))(this, reader);
	}

};

}
