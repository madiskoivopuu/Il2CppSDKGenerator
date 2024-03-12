#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClickable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClickable"));
	}


	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(IClickable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(IClickable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(IClickable*))(Il2CppBase() + 0x0))(this);
	}

};

}
