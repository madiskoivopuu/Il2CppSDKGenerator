#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnRemoveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnRemoveComponent"));
	}

	template <typename T = bool> T& BreakeSourceAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ActivateTarget() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& UnlockTarget() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = float> T& DismountGlobalCooldown() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Effect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SpawnMagic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SpawnMagics() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(OnRemoveComponent*, Il2CppObject*))(Il2CppBase() + 0x11DDCCC))(this, target);
	}

};

