#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseCupWindow`1" 

class OdinsCupWindow: BaseCupWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OdinsCupWindow"));
	}


	template <typename T = uintptr_t> T get_ProgressType() {
		return ((T (*)(OdinsCupWindow*))(Il2CppBase() + 0x11D5CCC))(this);
	}
	template <typename T = float> T get_GetProcNormal() {
		return ((T (*)(OdinsCupWindow*))(Il2CppBase() + 0x11D5CD4))(this);
	}
	template <typename T = void*> T GetHelpTitleAndText() {
		return ((T (*)(OdinsCupWindow*))(Il2CppBase() + 0x11D5DC8))(this);
	}

};

}
