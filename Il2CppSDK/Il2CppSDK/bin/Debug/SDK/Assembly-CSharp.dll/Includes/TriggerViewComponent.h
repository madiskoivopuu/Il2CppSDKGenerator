#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerViewComponent"));
	}

	template <typename T = Il2CppString*> T& ActiveCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& InEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& OutEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& WallTrace() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(TriggerViewComponent*, uintptr_t))(Il2CppBase() + 0x1525BC4))(this, targetObject);
	}

};

}
