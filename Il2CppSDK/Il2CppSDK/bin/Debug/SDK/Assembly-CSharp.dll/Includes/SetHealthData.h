#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetHealthData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetHealthData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& HealthCoef() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = float> R& BonusHealth() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SetHealthData*, uintptr_t))(Il2CppBase() + 0x1624390))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SetHealthData*, uintptr_t))(Il2CppBase() + 0x16243F4))(this, reader);
	}

};

