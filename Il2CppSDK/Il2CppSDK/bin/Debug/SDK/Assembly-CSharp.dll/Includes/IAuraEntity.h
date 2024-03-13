#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAuraEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAuraEntity"));
	}


	template <typename T = AuraComponent*> T get_aura() {
		return ((T (*)(IAuraEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAura() {
		return ((T (*)(IAuraEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(IAuraEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x0))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T ReplaceAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(IAuraEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x0))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T RemoveAura() {
		return ((T (*)(IAuraEntity*))(Il2CppBase() + 0x0))(this);
	}

};

