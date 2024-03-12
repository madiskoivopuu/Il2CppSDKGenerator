#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDExperienceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDExperienceInfo"));
	}

	template <typename T = uintptr_t> T& _experienceLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _progress() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LockButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _oldLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& _oldLevelCap() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& _oldProgress() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Clean() {
		return ((T (*)(HUDExperienceInfo*))(Il2CppBase() + 0x14527D4))(this);
	}
	template <typename T = void> T Draw(uintptr_t actor, uintptr_t account) {
		return ((T (*)(HUDExperienceInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x14527E0))(this, actor, account);
	}
	template <typename T = void> T Draw_1(uintptr_t item, int32_t levelCap) {
		return ((T (*)(HUDExperienceInfo*, uintptr_t, int32_t))(Il2CppBase() + 0x1452BA0))(this, item, levelCap);
	}

};

}
