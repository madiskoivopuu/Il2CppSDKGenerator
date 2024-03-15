#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyEffectComponent.h" 

class ApplyOnAnotherTargetEffectComponent : public BaseApplyEffectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyOnAnotherTargetEffectComponent"));
	}

	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& ActorCondition() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyOnAnotherTargetEffectComponent*, Il2CppObject*))(Il2CppBase() + 0x1894D3C))(this, targetObject);
	}

};

