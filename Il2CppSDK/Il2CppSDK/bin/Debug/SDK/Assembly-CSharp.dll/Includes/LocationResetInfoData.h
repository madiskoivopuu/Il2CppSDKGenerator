#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationResetInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetInfoData"));
	}

	template <typename R = int64_t> R& ResetTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& CoolDownTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& ResetCount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = CurrencyType*> R& CurrencyType() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LocationResetInfoData*, uintptr_t))(Il2CppBase() + 0x171E274))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LocationResetInfoData*, uintptr_t))(Il2CppBase() + 0x171E2F8))(this, reader);
	}

};

