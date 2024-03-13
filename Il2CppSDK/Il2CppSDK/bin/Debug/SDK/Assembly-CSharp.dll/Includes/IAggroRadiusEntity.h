#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAggroRadiusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAggroRadiusEntity"));
	}


	template <typename T = AggroRadiusComponent*> T get_aggroRadius() {
		return ((T (*)(IAggroRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAggroRadius() {
		return ((T (*)(IAggroRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((T (*)(IAggroRadiusEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename T = void> T ReplaceAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((T (*)(IAggroRadiusEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename T = void> T RemoveAggroRadius() {
		return ((T (*)(IAggroRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

