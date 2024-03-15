#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ImageButtonMonoBehaviour.h" 

class HUDAttackButton : public ImageButtonMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDAttackButton"));
	}

	template <typename R = uintptr_t> R& _durability() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R set_Durability(float value) {
		return ((R (*)(HUDAttackButton*, float))(Il2CppBase() + 0x144A778))(this, value);
	}

};

