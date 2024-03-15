#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PetInfoWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetInfoWindow"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _closeBtns() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppArray<PetSkillProgressView*>*> R& _skillsProgress() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(PetInfoWindow*))(Il2CppBase() + 0x11ED544))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(PetInfoWindow*))(Il2CppBase() + 0x11ED668))(this);
	}

};

