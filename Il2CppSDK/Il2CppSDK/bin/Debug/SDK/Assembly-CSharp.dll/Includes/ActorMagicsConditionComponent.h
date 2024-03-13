#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MagicCondition.h" 

class ActorMagicsConditionComponent : public MagicCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActorMagicsConditionComponent"));
	}

	template <typename T = Nullable1int32_t>*> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Nullable1int32_t>*> T& MinCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ActorMagicsConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x18AEFB0))(this, target);
	}

};

