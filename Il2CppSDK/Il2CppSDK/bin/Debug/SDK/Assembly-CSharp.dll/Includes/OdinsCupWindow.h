#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseCupWindow1.h" 

class OdinsCupWindow : public BaseCupWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OdinsCupWindow"));
	}


	template <typename R = PlayerClassProgress*> R get_ProgressType() {
		return ((R (*)(OdinsCupWindow*))(Il2CppBase() + 0x11D5CCC))(this);
	}
	template <typename R = float> R get_GetProcNormal() {
		return ((R (*)(OdinsCupWindow*))(Il2CppBase() + 0x11D5CD4))(this);
	}
	 ValueTuple2Il2CppString*, Il2CppArray<Il2CppString*>*>* GetHelpTitleAndText() {
		return ((ValueTuple2Il2CppString*, Il2CppArray<Il2CppString*>*>* (*)(OdinsCupWindow*))(Il2CppBase() + 0x11D5DC8))(this);
	}

};

