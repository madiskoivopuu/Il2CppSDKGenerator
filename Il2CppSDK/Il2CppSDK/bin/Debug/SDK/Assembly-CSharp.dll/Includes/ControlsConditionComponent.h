#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ControlsConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ControlsConditionComponent"));
	}

	 Nullable1bool>*& Stunned() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x10);
	}
	 Nullable1bool>*& Rooted() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x12);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ControlsConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15F3870))(this, target);
	}

};

