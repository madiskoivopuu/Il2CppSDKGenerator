#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeMagicComponent"));
	}

	template <typename T = float> T& AddDuration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1float>*> T& DurationCoef() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Nullable1float>*> T& DamageCoef() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AddChildren() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Dispel() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ChangeMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x13EAA30))(this, target);
	}

};

