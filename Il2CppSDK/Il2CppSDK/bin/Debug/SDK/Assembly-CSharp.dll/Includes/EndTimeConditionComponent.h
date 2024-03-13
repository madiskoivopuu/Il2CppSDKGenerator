#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EndTimeConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EndTimeConditionComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& FailNotHaveEndTime() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = float> T& TimeOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& CheckGroupChild() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(EndTimeConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x137095C))(this, target);
	}

};

