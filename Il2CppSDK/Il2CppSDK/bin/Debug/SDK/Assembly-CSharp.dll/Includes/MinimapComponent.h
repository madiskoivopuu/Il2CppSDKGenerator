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

	template <typename T = Il2CppString*> T GetIconName(uintptr_t world, uintptr_t avatar, uintptr_t target) {
		return ((T (*)(MinimapComponent*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x12D2E58))(this, world, avatar, target);
	}
	template <typename T = Il2CppString*> T GetIconName_1(uintptr_t world, uintptr_t target) {
		return ((T (*)(MinimapComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12D2F14))(this, world, target);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MinimapComponent*, uintptr_t))(Il2CppBase() + 0x12D3074))(this, targetObject);
	}

};

}
