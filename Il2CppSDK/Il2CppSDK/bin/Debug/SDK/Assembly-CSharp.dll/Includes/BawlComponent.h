#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BawlComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BawlComponent"));
	}

	template <typename T = Il2CppString*> T& Group() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ActiveCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MinRadius() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& WallTrace() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Cooldown() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T GetItem(uintptr_t world, uintptr_t source, uintptr_t target) {
		return ((T (*)(BawlComponent*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16B8F20))(this, world, source, target);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BawlComponent*, uintptr_t))(Il2CppBase() + 0x16B8FD4))(this, target);
	}

};

}
