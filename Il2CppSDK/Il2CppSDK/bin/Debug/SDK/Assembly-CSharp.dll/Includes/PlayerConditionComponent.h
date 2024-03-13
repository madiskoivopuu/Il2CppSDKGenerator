#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerConditionComponent"));
	}

	template <typename T = Nullable1bool>*> T& Real() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x12);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PlayerConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15615AC))(this, target);
	}

};

