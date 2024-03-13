#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipBonusesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipBonusesComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(VipBonusesComponent*, Il2CppObject*))(Il2CppBase() + 0x15CE214))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(VipBonusesComponent*, uintptr_t))(Il2CppBase() + 0x15CE290))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(VipBonusesComponent*, uintptr_t))(Il2CppBase() + 0x15CE3EC))(this, writer);
	}

};

