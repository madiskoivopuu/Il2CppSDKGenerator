#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseCupWindow1.h" 

class FreyrsCupWindow : public BaseCupWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FreyrsCupWindow"));
	}

	template <typename R = uintptr_t> R& _infoBtn() {
		return *(R*)((uintptr_t)this + 0x258);
	}
	template <typename R = ClassProgressInfoPopup*> R& _infoPopup() {
		return *(R*)((uintptr_t)this + 0x260);
	}

	template <typename R = PlayerClassProgress> R get_ProgressType() {
		return ((R (*)(FreyrsCupWindow*))(Il2CppBase() + 0x15FCA24))(this);
	}
	template <typename R = float> R get_GetProcNormal() {
		return ((R (*)(FreyrsCupWindow*))(Il2CppBase() + 0x15FCA2C))(this);
	}
	 ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* GetHelpTitleAndText() {
		return ((ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* (*)(FreyrsCupWindow*))(Il2CppBase() + 0x15FCB20))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(FreyrsCupWindow*))(Il2CppBase() + 0x15FCB84))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(FreyrsCupWindow*, float))(Il2CppBase() + 0x15FCC40))(this, deltaTime);
	}
	template <typename R = void> R ShowInfo() {
		return ((R (*)(FreyrsCupWindow*))(Il2CppBase() + 0x15FCCD4))(this);
	}

};

