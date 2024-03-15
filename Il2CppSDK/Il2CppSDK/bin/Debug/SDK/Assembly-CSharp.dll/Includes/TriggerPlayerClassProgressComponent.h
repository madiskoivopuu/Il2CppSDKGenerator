#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerPlayerClassProgressComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerPlayerClassProgressComponent"));
	}

	template <typename R = PlayerClassProgress*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerPlayerClassProgressComponent*, Il2CppObject*))(Il2CppBase() + 0x1525994))(this, target);
	}

};

