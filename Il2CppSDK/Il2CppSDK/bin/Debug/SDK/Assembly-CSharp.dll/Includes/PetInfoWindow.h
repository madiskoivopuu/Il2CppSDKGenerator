#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PetInfoWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetInfoWindow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _closeBtns() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _skillsProgress() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PetInfoWindow*))(Il2CppBase() + 0x11ED544))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PetInfoWindow*))(Il2CppBase() + 0x11ED668))(this);
	}

};

