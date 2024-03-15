#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EndTimeConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EndTimeConditionComponent"));
	}

	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& FailNotHaveEndTime() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = float> R& TimeOffset() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = bool> R& CheckGroupChild() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(EndTimeConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x137095C))(this, target);
	}

};

