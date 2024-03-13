#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyEffectComponent.h" 

class ApplyOnAnotherTargetEffectComponent : public BaseApplyEffectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyOnAnotherTargetEffectComponent"));
	}

	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& ActorCondition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ApplyOnAnotherTargetEffectComponent*, Il2CppObject*))(Il2CppBase() + 0x1894D3C))(this, targetObject);
	}

};

