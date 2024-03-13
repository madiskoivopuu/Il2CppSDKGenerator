#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPursuitEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPursuitEntity"));
	}


	template <typename T = PursuitComponent*> T get_pursuit() {
		return ((T (*)(IPursuitEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPursuit() {
		return ((T (*)(IPursuitEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((T (*)(IPursuitEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename T = void> T ReplacePursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((T (*)(IPursuitEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename T = void> T RemovePursuit() {
		return ((T (*)(IPursuitEntity*))(Il2CppBase() + 0x0))(this);
	}

};

