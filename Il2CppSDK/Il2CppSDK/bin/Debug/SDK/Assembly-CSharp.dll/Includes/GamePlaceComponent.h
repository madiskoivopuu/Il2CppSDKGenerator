#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamePlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamePlaceComponent"));
	}

	template <typename R = Fill*> R& Required() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Fill*> R& None() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = Fill*> R& Fill() {
		return *(R*)((uintptr_t)this + 0x12);
	}
	template <typename R = Il2CppArray<MaxCountCondition*>*> R& MaxCountConditions() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& MaxCount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& MaxGroup() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& Height() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& Width() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = int32_t> R GetHeight() {
		return ((R (*)(GamePlaceComponent*))(Il2CppBase() + 0x176D1B0))(this);
	}
	template <typename R = int32_t> R GetWidth() {
		return ((R (*)(GamePlaceComponent*))(Il2CppBase() + 0x176D1C0))(this);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(GamePlaceComponent*, Il2CppObject*))(Il2CppBase() + 0x176D1D0))(this, targetObject);
	}
	template <typename R = int32_t> R GetMaxCount(ICommonContexts* world, GameEntity* avatar) {
		return ((R (*)(GamePlaceComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x176D2A8))(this, world, avatar);
	}

};

