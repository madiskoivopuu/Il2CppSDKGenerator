#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftConditionComponent"));
	}

	 Nullable1bool>*& OutputSlotsEmpty() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CraftConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1341604))(this, target);
	}

};

