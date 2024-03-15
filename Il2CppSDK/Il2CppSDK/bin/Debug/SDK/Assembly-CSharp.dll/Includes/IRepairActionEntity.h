#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRepairActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRepairActionEntity"));
	}


	template <typename R = RepairActionComponent*> R get_repairAction() {
		return ((R (*)(IRepairActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRepairAction() {
		return ((R (*)(IRepairActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRepairAction(Il2CppString* newName) {
		return ((R (*)(IRepairActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceRepairAction(Il2CppString* newName) {
		return ((R (*)(IRepairActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveRepairAction() {
		return ((R (*)(IRepairActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

