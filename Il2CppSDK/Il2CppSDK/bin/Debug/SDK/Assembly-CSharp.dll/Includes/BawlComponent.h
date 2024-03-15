#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BawlComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BawlComponent"));
	}

	template <typename R = Il2CppString*> R& Group() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ActiveCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& MinRadius() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Radius() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = bool> R& WallTrace() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& Cooldown() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = Il2CppArray<Item*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = Item*> R GetItem(ICommonContexts* world, GameEntity* source, GameEntity* target) {
		return ((R (*)(BawlComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x16B8F20))(this, world, source, target);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BawlComponent*, Il2CppObject*))(Il2CppBase() + 0x16B8FD4))(this, target);
	}

};

