#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetConditionComponent"));
	}

	template <typename R = Il2CppString*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1<bool>*& CanAddExp() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PetConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x11EB854))(this, target);
	}

};

