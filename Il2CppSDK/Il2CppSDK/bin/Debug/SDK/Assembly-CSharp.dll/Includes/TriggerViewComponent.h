#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerViewComponent"));
	}

	template <typename R = Il2CppString*> R& ActiveCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& InEffect() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& OutEffect() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& Radius() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& WallTrace() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(TriggerViewComponent*, Il2CppObject*))(Il2CppBase() + 0x1525BC4))(this, targetObject);
	}

};

