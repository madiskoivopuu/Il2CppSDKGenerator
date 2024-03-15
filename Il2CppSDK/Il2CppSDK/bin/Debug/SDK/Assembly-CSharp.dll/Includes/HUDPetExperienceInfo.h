#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDPetExperienceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDPetExperienceInfo"));
	}

	template <typename R = uintptr_t> R& _gradeText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _lockMark() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _progress() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _expText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Nullable1int32_t>*& _grade() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x38);
	}
	 Nullable1float>*& _exp() {
		return *(Nullable1float>**)((uintptr_t)this + 0x40);
	}
	 Nullable1float>*& _maxExp() {
		return *(Nullable1float>**)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Draw(GameEntity* actor) {
		return ((R (*)(HUDPetExperienceInfo*, GameEntity*))(Il2CppBase() + 0x1279600))(this, actor);
	}
	template <typename R = void> R Draw_1(InventorySlotEntity* petSlot) {
		return ((R (*)(HUDPetExperienceInfo*, InventorySlotEntity*))(Il2CppBase() + 0x12796DC))(this, petSlot);
	}

};

