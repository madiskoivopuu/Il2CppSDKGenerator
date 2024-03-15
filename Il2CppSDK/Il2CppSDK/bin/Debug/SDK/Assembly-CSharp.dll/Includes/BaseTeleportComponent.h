#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseTeleportComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseTeleportComponent"));
	}

	template <typename R = Il2CppString*> R& TargetName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = TargetsSelector*> R& Selector() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = DirectionSource*> R& Direction() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Offset() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = bool> R& IgnoreWall() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BaseTeleportComponent*, Il2CppObject*))(Il2CppBase() + 0x16710B0))(this, targetObject);
	}

};

