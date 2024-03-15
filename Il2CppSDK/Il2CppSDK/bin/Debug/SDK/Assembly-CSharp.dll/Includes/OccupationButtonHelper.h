#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ButtonHelper.h" 

class OccupationButtonHelper : public ButtonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OccupationButtonHelper"));
	}

	template <typename R = uintptr_t> R& TitleText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Bind(DialogueEntity* dialogue, Action1ButtonHelper*>* onClick) {
		return ((R (*)(OccupationButtonHelper*, DialogueEntity*, Action1ButtonHelper*>*))(Il2CppBase() + 0x11D4D38))(this, dialogue, onClick);
	}
	template <typename R = void> R UpdateLocalization(DialogueEntity* dialogue) {
		return ((R (*)(OccupationButtonHelper*, DialogueEntity*))(Il2CppBase() + 0x11D4F18))(this, dialogue);
	}

};

