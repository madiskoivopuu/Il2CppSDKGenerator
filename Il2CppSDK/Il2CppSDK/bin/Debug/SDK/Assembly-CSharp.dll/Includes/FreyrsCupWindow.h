#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseCupWindow`1" 

class FreyrsCupWindow: BaseCupWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FreyrsCupWindow"));
	}

	template <typename T = uintptr_t> T& _infoBtn() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& _infoPopup() {
		return *(T*)((uintptr_t)this + 0x260);
	}

	template <typename T = uintptr_t> T get_ProgressType() {
		return ((T (*)(FreyrsCupWindow*))(Il2CppBase() + 0x15FCA24))(this);
	}
	template <typename T = float> T get_GetProcNormal() {
		return ((T (*)(FreyrsCupWindow*))(Il2CppBase() + 0x15FCA2C))(this);
	}
	template <typename T = void*> T GetHelpTitleAndText() {
		return ((T (*)(FreyrsCupWindow*))(Il2CppBase() + 0x15FCB20))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(FreyrsCupWindow*))(Il2CppBase() + 0x15FCB84))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(FreyrsCupWindow*, float))(Il2CppBase() + 0x15FCC40))(this, deltaTime);
	}
	template <typename T = void> T ShowInfo() {
		return ((T (*)(FreyrsCupWindow*))(Il2CppBase() + 0x15FCCD4))(this);
	}

};

}
