#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Directed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IgnoreDiplomacy() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T GetIconName(ICommonContexts* world, GameEntity* avatar, GameEntity* target) {
		return ((T (*)(MinimapComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x12D2E58))(this, world, avatar, target);
	}
	template <typename T = Il2CppString*> T GetIconName_1(ICommonContexts* world, GameEntity* target) {
		return ((T (*)(MinimapComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x12D2F14))(this, world, target);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(MinimapComponent*, Il2CppObject*))(Il2CppBase() + 0x12D3074))(this, targetObject);
	}

};

