#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyCosmeticToInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyCosmeticToInventoryComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& ResourceRG() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyCosmeticToInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x189364C))(this, target);
	}

};

