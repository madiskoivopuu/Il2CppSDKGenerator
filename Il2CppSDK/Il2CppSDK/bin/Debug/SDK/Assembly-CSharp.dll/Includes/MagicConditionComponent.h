#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MagicCondition.h" 

class MagicConditionComponent : public MagicCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicConditionComponent"));
	}

	 Nullable1<int32_t>*& MaxCount() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x2C);
	}
	 Nullable1<int32_t>*& MinCount() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x34);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MagicConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x11F54F0))(this, target);
	}

};

