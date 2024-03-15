#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAggroRadiusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAggroRadiusEntity"));
	}


	template <typename R = AggroRadiusComponent*> R get_aggroRadius() {
		return ((R (*)(IAggroRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAggroRadius() {
		return ((R (*)(IAggroRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((R (*)(IAggroRadiusEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename R = void> R ReplaceAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((R (*)(IAggroRadiusEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename R = void> R RemoveAggroRadius() {
		return ((R (*)(IAggroRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

