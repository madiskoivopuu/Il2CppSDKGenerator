#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAuraEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAuraEntity"));
	}


	template <typename R = AuraComponent*> R get_aura() {
		return ((R (*)(IAuraEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAura() {
		return ((R (*)(IAuraEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item>* newList, TargetsSelector* newSelector) {
		return ((R (*)(IAuraEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item>*, TargetsSelector*))(Il2CppBase() + 0x0))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R ReplaceAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item>* newList, TargetsSelector* newSelector) {
		return ((R (*)(IAuraEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item>*, TargetsSelector*))(Il2CppBase() + 0x0))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R RemoveAura() {
		return ((R (*)(IAuraEntity*))(Il2CppBase() + 0x0))(this);
	}

};

