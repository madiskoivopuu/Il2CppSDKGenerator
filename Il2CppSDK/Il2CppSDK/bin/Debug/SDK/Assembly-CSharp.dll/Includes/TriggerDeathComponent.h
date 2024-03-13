#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerDeathComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Stats() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T Contains(DamageStatType* state) {
		return ((T (*)(TriggerDeathComponent*, DamageStatType*))(Il2CppBase() + 0x1525660))(this, state);
	}
	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerDeathComponent*, Il2CppObject*))(Il2CppBase() + 0x15256C0))(this, target);
	}

};

