#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPursuitEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPursuitEntity"));
	}


	template <typename R = PursuitComponent*> R get_pursuit() {
		return ((R (*)(IPursuitEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPursuit() {
		return ((R (*)(IPursuitEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((R (*)(IPursuitEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename R = void> R ReplacePursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((R (*)(IPursuitEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename R = void> R RemovePursuit() {
		return ((R (*)(IPursuitEntity*))(Il2CppBase() + 0x0))(this);
	}

};

