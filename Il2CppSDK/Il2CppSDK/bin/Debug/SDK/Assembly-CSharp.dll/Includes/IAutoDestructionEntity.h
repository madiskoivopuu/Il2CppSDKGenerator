#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoDestructionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoDestructionEntity"));
	}


	template <typename R = AutoDestructionComponent*> R get_autoDestruction() {
		return ((R (*)(IAutoDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAutoDestruction() {
		return ((R (*)(IAutoDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((R (*)(IAutoDestructionEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x0))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename R = void> R ReplaceAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((R (*)(IAutoDestructionEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x0))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename R = void> R RemoveAutoDestruction() {
		return ((R (*)(IAutoDestructionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

