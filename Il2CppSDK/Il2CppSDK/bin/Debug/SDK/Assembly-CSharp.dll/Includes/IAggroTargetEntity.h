#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAggroTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAggroTargetEntity"));
	}


	template <typename R = AggroTargetComponent*> R get_aggroTarget() {
		return ((R (*)(IAggroTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAggroTarget() {
		return ((R (*)(IAggroTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAggroTarget(int32_t newId, bool newMovable) {
		return ((R (*)(IAggroTargetEntity*, int32_t, bool))(Il2CppBase() + 0x0))(this, newId, newMovable);
	}
	template <typename R = void> R ReplaceAggroTarget(int32_t newId, bool newMovable) {
		return ((R (*)(IAggroTargetEntity*, int32_t, bool))(Il2CppBase() + 0x0))(this, newId, newMovable);
	}
	template <typename R = void> R RemoveAggroTarget() {
		return ((R (*)(IAggroTargetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

