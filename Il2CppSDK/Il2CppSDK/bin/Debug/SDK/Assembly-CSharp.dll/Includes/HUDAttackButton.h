#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ImageButtonMonoBehaviour.h" 

class HUDAttackButton : public ImageButtonMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDAttackButton"));
	}

	template <typename T = uintptr_t> T& _durability() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T set_Durability(float value) {
		return ((T (*)(HUDAttackButton*, float))(Il2CppBase() + 0x144A778))(this, value);
	}

};

