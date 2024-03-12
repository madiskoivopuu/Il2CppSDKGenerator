#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseUncustomizable" 

class HUDMainInventoryButton: HUDButtonBaseUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDMainInventoryButton"));
	}


	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDMainInventoryButton*, uintptr_t))(Il2CppBase() + 0x145E228))(this, window);
	}

};

}
