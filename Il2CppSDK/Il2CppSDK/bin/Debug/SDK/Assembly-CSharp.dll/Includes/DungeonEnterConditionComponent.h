#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonEnterConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterConditionComponent"));
	}

	template <typename R = bool> R& CanEnter() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DungeonEnterConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x130755C))(this, target);
	}

};

