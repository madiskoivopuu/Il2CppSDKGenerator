#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeMagicComponent"));
	}

	template <typename R = float> R& AddDuration() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1<float>*& DurationCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x14);
	}
	 Nullable1<float>*& DamageCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x1C);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& AddChildren() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& Dispel() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ChangeMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x13EAA30))(this, target);
	}

};

