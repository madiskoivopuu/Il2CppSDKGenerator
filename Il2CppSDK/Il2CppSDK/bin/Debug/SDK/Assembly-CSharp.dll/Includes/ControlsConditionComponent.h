#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ControlsConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ControlsConditionComponent"));
	}

	template <typename T = Nullable1bool>*> T& Stunned() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1bool>*> T& Rooted() {
		return *(T*)((uintptr_t)this + 0x12);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ControlsConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15F3870))(this, target);
	}

};

