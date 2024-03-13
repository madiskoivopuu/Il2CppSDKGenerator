#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseCupWindow1.h" 

class OdinsCupWindow : public BaseCupWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OdinsCupWindow"));
	}


	template <typename T = PlayerClassProgress*> T get_ProgressType() {
		return ((T (*)(OdinsCupWindow*))(Il2CppBase() + 0x11D5CCC))(this);
	}
	template <typename T = float> T get_GetProcNormal() {
		return ((T (*)(OdinsCupWindow*))(Il2CppBase() + 0x11D5CD4))(this);
	}
	template <typename T = ValueTuple2Il2CppString*, Il2CppArray<uintptr_t>*>*> T GetHelpTitleAndText() {
		return ((T (*)(OdinsCupWindow*))(Il2CppBase() + 0x11D5DC8))(this);
	}

};

