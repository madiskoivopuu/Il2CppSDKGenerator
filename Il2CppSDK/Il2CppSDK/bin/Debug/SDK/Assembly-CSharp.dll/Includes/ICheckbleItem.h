#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICheckbleItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICheckbleItem"));
	}


	template <typename R = bool> R get_IsChecked() {
		return ((R (*)(ICheckbleItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Check(bool isOn) {
		return ((R (*)(ICheckbleItem*, bool))(Il2CppBase() + 0x0))(this, isOn);
	}

};

