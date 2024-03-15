#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySendInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySendInventoryComponent"));
	}

	template <typename R = ActionType*> R& ActionType() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplySendInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x1895498))(this, target);
	}

};

