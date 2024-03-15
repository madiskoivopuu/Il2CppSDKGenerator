#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClickable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClickable"));
	}


	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(IClickable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(IClickable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(IClickable*))(Il2CppBase() + 0x0))(this);
	}

};

