#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SharedConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SharedConditionComponent"));
	}

	template <typename R = Il2CppString*> R& CheckGroupSlot() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& GetFromParent() {
		return *(R*)((uintptr_t)this + 0x19);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SharedConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x162FEE8))(this, target);
	}

};

