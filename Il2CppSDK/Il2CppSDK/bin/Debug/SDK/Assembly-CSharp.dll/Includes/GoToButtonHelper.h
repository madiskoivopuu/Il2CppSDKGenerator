#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ButtonHelper.h" 

class GoToButtonHelper : public ButtonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToButtonHelper"));
	}

	template <typename R = uintptr_t> R& TitleText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& NotActivematerial() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& Lock() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& LockText() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R Bind(DialogueEntity* dialogue, Action1<ButtonHelper*>* onClick) {
		return ((R (*)(GoToButtonHelper*, DialogueEntity*, Action1<ButtonHelper*>*))(Il2CppBase() + 0x12DEB74))(this, dialogue, onClick);
	}

};

