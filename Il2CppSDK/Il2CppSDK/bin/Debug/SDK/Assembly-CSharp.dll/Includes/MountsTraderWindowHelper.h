#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountsTraderWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsTraderWindowHelper"));
	}


	template <typename R = MountsTraderWindow*> static R ShowMountsTrader(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x155648C))(0, manager, targetId);
	}
	template <typename R = void> static R CloseMountsTrader(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1556558))(0, manager, targetId);
	}

};

