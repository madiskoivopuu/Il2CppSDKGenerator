#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAggroTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAggroTargetEntity"));
	}


	template <typename T = AggroTargetComponent*> T get_aggroTarget() {
		return ((T (*)(IAggroTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAggroTarget() {
		return ((T (*)(IAggroTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAggroTarget(int32_t newId, bool newMovable) {
		return ((T (*)(IAggroTargetEntity*, int32_t, bool))(Il2CppBase() + 0x0))(this, newId, newMovable);
	}
	template <typename T = void> T ReplaceAggroTarget(int32_t newId, bool newMovable) {
		return ((T (*)(IAggroTargetEntity*, int32_t, bool))(Il2CppBase() + 0x0))(this, newId, newMovable);
	}
	template <typename T = void> T RemoveAggroTarget() {
		return ((T (*)(IAggroTargetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

