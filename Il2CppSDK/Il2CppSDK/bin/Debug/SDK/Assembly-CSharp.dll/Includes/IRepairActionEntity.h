#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRepairActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRepairActionEntity"));
	}


	template <typename T = RepairActionComponent*> T get_repairAction() {
		return ((T (*)(IRepairActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRepairAction() {
		return ((T (*)(IRepairActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRepairAction(Il2CppString* newName) {
		return ((T (*)(IRepairActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceRepairAction(Il2CppString* newName) {
		return ((T (*)(IRepairActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveRepairAction() {
		return ((T (*)(IRepairActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

