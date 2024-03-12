#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PursuitComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PursuitComponent"));
	}

	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& EvadeDistance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& BackCooldown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& PriorityOnPlayers() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IgnoreBorder() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(PursuitComponent*, uintptr_t))(Il2CppBase() + 0x11BA01C))(this, targetObject);
	}

};

}
