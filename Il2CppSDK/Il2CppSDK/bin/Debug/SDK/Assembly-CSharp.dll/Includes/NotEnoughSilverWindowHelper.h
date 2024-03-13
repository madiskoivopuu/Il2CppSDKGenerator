#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotEnoughSilverWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughSilverWindowHelper"));
	}


	template <typename T = NotEnoughSilverWindow*> static T ShowNotEnoughSilver(UIWindowsManager* manager, int32_t notEnoughSilver) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x13B43EC))(0, manager, notEnoughSilver);
	}

};

