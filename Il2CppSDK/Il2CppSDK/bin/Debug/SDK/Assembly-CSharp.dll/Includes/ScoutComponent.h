#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutComponent"));
	}

	template <typename T = int32_t> T& MinLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Tax() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& CanActivateEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ActiveEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& CooldownEffect() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T GetItemIndex(Il2CppString* eventName) {
		return ((T (*)(ScoutComponent*, Il2CppString*))(Il2CppBase() + 0x13578F8))(this, eventName);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ScoutComponent*, uintptr_t))(Il2CppBase() + 0x1357994))(this, target);
	}

};

}
