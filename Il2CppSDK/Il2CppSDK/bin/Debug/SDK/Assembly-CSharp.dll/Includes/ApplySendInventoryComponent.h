#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySendInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySendInventoryComponent"));
	}

	template <typename T = ActionType*> T& ActionType() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplySendInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x1895498))(this, target);
	}

};

