#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDBlueprintsButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBlueprintsButton"));
	}


	template <typename T = void> T Bind(IHUDWindow* window) {
		return ((T (*)(HUDBlueprintsButton*, IHUDWindow*))(Il2CppBase() + 0x144B9B4))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDBlueprintsButton*, float))(Il2CppBase() + 0x144BA74))(this, deltaTime);
	}
	template <typename T = void> T UpdateCounter() {
		return ((T (*)(HUDBlueprintsButton*))(Il2CppBase() + 0x144BB84))(this);
	}
	template <typename T = void> T Bindb__0_0() {
		return ((T (*)(HUDBlueprintsButton*))(Il2CppBase() + 0x144BD54))(this);
	}

};

