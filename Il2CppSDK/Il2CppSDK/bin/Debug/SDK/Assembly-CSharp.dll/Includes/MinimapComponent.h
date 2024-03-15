#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Directed() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& IgnoreDiplomacy() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = Il2CppArray<Item*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = Il2CppString*> R GetIconName(ICommonContexts* world, GameEntity* avatar, GameEntity* target) {
		return ((R (*)(MinimapComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x12D2E58))(this, world, avatar, target);
	}
	template <typename R = Il2CppString*> R GetIconName_1(ICommonContexts* world, GameEntity* target) {
		return ((R (*)(MinimapComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x12D2F14))(this, world, target);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MinimapComponent*, Il2CppObject*))(Il2CppBase() + 0x12D3074))(this, targetObject);
	}

};

