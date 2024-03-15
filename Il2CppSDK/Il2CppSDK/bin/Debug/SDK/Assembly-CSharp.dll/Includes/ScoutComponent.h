#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutComponent"));
	}

	template <typename R = int32_t> R& MinLevel() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Tax() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppArray<Item*>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& CanActivateEffect() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& ActiveEffect() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& CooldownEffect() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = int32_t> R GetItemIndex(Il2CppString* eventName) {
		return ((R (*)(ScoutComponent*, Il2CppString*))(Il2CppBase() + 0x13578F8))(this, eventName);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ScoutComponent*, Il2CppObject*))(Il2CppBase() + 0x1357994))(this, target);
	}

};

