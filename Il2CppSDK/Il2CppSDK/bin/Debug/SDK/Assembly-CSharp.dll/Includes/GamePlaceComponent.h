#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamePlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamePlaceComponent"));
	}

	template <typename T = Fill*> T& Required() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Fill*> T& None() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Fill*> T& Fill() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MaxCountConditions() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& MaxGroup() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T GetHeight() {
		return ((T (*)(GamePlaceComponent*))(Il2CppBase() + 0x176D1B0))(this);
	}
	template <typename T = int32_t> T GetWidth() {
		return ((T (*)(GamePlaceComponent*))(Il2CppBase() + 0x176D1C0))(this);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(GamePlaceComponent*, Il2CppObject*))(Il2CppBase() + 0x176D1D0))(this, targetObject);
	}
	template <typename T = int32_t> T GetMaxCount(ICommonContexts* world, GameEntity* avatar) {
		return ((T (*)(GamePlaceComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x176D2A8))(this, world, avatar);
	}

};

