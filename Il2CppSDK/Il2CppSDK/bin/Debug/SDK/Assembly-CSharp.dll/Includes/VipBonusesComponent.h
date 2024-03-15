#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipBonusesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipBonusesComponent"));
	}

	template <typename R = Il2CppArray<VipBonus>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(VipBonusesComponent*, Il2CppObject*))(Il2CppBase() + 0x15CE214))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(VipBonusesComponent*, uintptr_t))(Il2CppBase() + 0x15CE290))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(VipBonusesComponent*, uintptr_t))(Il2CppBase() + 0x15CE3EC))(this, writer);
	}

};

