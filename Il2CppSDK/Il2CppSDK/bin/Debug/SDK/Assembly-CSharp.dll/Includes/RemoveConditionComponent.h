#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveConditionComponent"));
	}

	template <typename T = float> T& TargetHpCoefLess() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& TargetHpCoefMore() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& ActorDestroyed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ActionDestroyed() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& ActionApplied() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& ActorNotEquipSourceItem() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ActorNoEquipTags() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TargetNoEquipTags() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& TargetNoEquipClass() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& TargetSneaked() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& TargetHasntMagic() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& TargetRiding() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& ActorCondition() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = bool> T NeedTarget() {
		return ((T (*)(RemoveConditionComponent*))(Il2CppBase() + 0x13A01A4))(this);
	}
	template <typename T = bool> T NeedActor() {
		return ((T (*)(RemoveConditionComponent*))(Il2CppBase() + 0x13A0254))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RemoveConditionComponent*, uintptr_t))(Il2CppBase() + 0x13A02A8))(this, target);
	}

};

}
