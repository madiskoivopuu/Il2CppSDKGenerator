#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyRuneToInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyRuneToInventoryComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyRuneToInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x18953C4))(this, target);
	}

};

