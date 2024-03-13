#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoDestructionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoDestructionEntity"));
	}


	template <typename T = AutoDestructionComponent*> T get_autoDestruction() {
		return ((T (*)(IAutoDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAutoDestruction() {
		return ((T (*)(IAutoDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((T (*)(IAutoDestructionEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x0))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename T = void> T ReplaceAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((T (*)(IAutoDestructionEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x0))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename T = void> T RemoveAutoDestruction() {
		return ((T (*)(IAutoDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

