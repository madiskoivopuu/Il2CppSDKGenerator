#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerBuildComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerBuildComponent"));
	}

	template <typename R = bool> R& Upgrade() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerBuildComponent*, Il2CppObject*))(Il2CppBase() + 0x15254FC))(this, target);
	}

};

