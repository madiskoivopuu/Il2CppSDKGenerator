#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotEnoughCoinsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughCoinsWindowHelper"));
	}


	template <typename R = NotEnoughCoinsWindow*> static R ShowNotEnoughCoins(UIWindowsManager* manager, int32_t notEnoughCoins) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x13B3490))(0, manager, notEnoughCoins);
	}

};

