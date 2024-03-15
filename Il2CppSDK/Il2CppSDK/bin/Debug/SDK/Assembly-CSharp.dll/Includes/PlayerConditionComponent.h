#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerConditionComponent"));
	}

	 Nullable1<bool>*& Real() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x12);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PlayerConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15615AC))(this, target);
	}

};

