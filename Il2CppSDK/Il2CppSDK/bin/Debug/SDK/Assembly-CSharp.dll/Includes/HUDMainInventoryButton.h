#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseUncustomizable.h" 

class HUDMainInventoryButton : public HUDButtonBaseUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDMainInventoryButton"));
	}


	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDMainInventoryButton*, IHUDWindow*))(Il2CppBase() + 0x145E228))(this, window);
	}

};

