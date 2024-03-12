#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICheckbleItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICheckbleItem"));
	}


	template <typename T = bool> T get_IsChecked() {
		return ((T (*)(ICheckbleItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Check(bool isOn) {
		return ((T (*)(ICheckbleItem*, bool))(Il2CppBase() + 0x0))(this, isOn);
	}

};

}
