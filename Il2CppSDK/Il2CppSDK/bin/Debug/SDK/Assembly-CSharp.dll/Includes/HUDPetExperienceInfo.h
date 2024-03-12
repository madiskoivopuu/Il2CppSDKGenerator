#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDPetExperienceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDPetExperienceInfo"));
	}

	template <typename T = uintptr_t> T& _gradeText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _lockMark() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _progress() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _expText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& _grade() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& _exp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& _maxExp() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Draw(uintptr_t actor) {
		return ((T (*)(HUDPetExperienceInfo*, uintptr_t))(Il2CppBase() + 0x1279600))(this, actor);
	}
	template <typename T = void> T Draw_1(uintptr_t petSlot) {
		return ((T (*)(HUDPetExperienceInfo*, uintptr_t))(Il2CppBase() + 0x12796DC))(this, petSlot);
	}

};

}
