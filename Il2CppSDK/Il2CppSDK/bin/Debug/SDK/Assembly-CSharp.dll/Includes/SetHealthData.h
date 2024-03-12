#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetHealthData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetHealthData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& HealthCoef() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& BonusHealth() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SetHealthData*, uintptr_t))(Il2CppBase() + 0x1624390))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SetHealthData*, uintptr_t))(Il2CppBase() + 0x16243F4))(this, reader);
	}

};

}
