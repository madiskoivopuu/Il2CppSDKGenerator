#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveConditionComponent"));
	}

	template <typename R = float> R& TargetHpCoefLess() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& TargetHpCoefMore() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = bool> R& ActorDestroyed() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& ActionDestroyed() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = bool> R& ActionApplied() {
		return *(R*)((uintptr_t)this + 0x1A);
	}
	template <typename R = bool> R& ActorNotEquipSourceItem() {
		return *(R*)((uintptr_t)this + 0x1B);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& ActorNoEquipTags() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& TargetNoEquipTags() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& TargetNoEquipClass() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Nullable1<bool>*& TargetSneaked() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& TargetHasntMagic() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Nullable1<bool>*& TargetRiding() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& ActorCondition() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = bool> R NeedTarget() {
		return ((R (*)(RemoveConditionComponent*))(Il2CppBase() + 0x13A01A4))(this);
	}
	template <typename R = bool> R NeedActor() {
		return ((R (*)(RemoveConditionComponent*))(Il2CppBase() + 0x13A0254))(this);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RemoveConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x13A02A8))(this, target);
	}

};

