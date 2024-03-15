#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerDeathComponent"));
	}

	template <typename R = Il2CppArray<DamageStatType>*> R& Stats() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R Contains(DamageStatType state) {
		return ((R (*)(TriggerDeathComponent*, DamageStatType))(Il2CppBase() + 0x1525660))(this, state);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerDeathComponent*, Il2CppObject*))(Il2CppBase() + 0x15256C0))(this, target);
	}

};

