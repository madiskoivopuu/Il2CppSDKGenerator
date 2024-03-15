#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDSimpleButton.h" 

class HUDTradesButton : public HUDSimpleButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDTradesButton"));
	}


	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDTradesButton*, IHUDWindow*))(Il2CppBase() + 0x1285890))(this, window);
	}

};

