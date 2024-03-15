#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PursuitComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PursuitComponent"));
	}

	template <typename R = float> R& Distance() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& EvadeDistance() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& Angle() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& BackCooldown() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = bool> R& PriorityOnPlayers() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& IgnoreBorder() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PursuitComponent*, Il2CppObject*))(Il2CppBase() + 0x11BA01C))(this, targetObject);
	}

};

