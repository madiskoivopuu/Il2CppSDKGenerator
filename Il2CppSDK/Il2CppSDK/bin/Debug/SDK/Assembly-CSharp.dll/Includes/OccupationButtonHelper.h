#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ButtonHelper" 

class OccupationButtonHelper: ButtonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OccupationButtonHelper"));
	}

	template <typename T = uintptr_t> T& TitleText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Bind(uintptr_t dialogue, void* onClick) {
		return ((T (*)(OccupationButtonHelper*, uintptr_t, void*))(Il2CppBase() + 0x11D4D38))(this, dialogue, onClick);
	}
	template <typename T = void> T UpdateLocalization(uintptr_t dialogue) {
		return ((T (*)(OccupationButtonHelper*, uintptr_t))(Il2CppBase() + 0x11D4F18))(this, dialogue);
	}

};

}
