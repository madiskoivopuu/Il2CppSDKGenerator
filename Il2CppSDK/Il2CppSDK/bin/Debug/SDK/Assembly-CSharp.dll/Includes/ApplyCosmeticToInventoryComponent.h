#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyCosmeticToInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyCosmeticToInventoryComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ResourceRG() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyCosmeticToInventoryComponent*, uintptr_t))(Il2CppBase() + 0x189364C))(this, target);
	}

};

}
