#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseActionCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseActionCondition"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& NoTag() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ActionType> R& Type() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ActionType> R& NoType() {
		return *(R*)((uintptr_t)this + 0x29);
	}
	 Nullable1<bool>*& Instant() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x2A);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BaseActionCondition*, Il2CppObject*))(Il2CppBase() + 0xFBBA14))(this, target);
	}
	template <typename R = bool> R Check(ActionEntity* actionEntity) {
		return ((R (*)(BaseActionCondition*, ActionEntity*))(Il2CppBase() + 0xFBBAE8))(this, actionEntity);
	}
	template <typename R = bool> R CheckWithNull(ActionEntity* actionEntity) {
		return ((R (*)(BaseActionCondition*, ActionEntity*))(Il2CppBase() + 0xFBBCBC))(this, actionEntity);
	}

};

