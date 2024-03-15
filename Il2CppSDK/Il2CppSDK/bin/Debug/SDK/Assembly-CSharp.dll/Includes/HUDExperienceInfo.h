#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDExperienceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDExperienceInfo"));
	}

	template <typename R = uintptr_t> R& _experienceLabel() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _progress() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& LockButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Nullable1int32_t>*& _oldLevel() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x30);
	}
	 Nullable1int32_t>*& _oldLevelCap() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x38);
	}
	 Nullable1float>*& _oldProgress() {
		return *(Nullable1float>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Clean() {
		return ((R (*)(HUDExperienceInfo*))(Il2CppBase() + 0x14527D4))(this);
	}
	template <typename R = void> R Draw(GameEntity* actor, AccountEntity* account) {
		return ((R (*)(HUDExperienceInfo*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x14527E0))(this, actor, account);
	}
	template <typename R = void> R Draw_1(IInventoryItem* item, int32_t levelCap) {
		return ((R (*)(HUDExperienceInfo*, IInventoryItem*, int32_t))(Il2CppBase() + 0x1452BA0))(this, item, levelCap);
	}

};

