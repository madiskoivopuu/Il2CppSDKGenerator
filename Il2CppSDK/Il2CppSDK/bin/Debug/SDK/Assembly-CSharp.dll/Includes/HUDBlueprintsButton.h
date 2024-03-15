#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDBlueprintsButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBlueprintsButton"));
	}


	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDBlueprintsButton*, IHUDWindow*))(Il2CppBase() + 0x144B9B4))(this, window);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDBlueprintsButton*, float))(Il2CppBase() + 0x144BA74))(this, deltaTime);
	}
	template <typename R = void> R UpdateCounter() {
		return ((R (*)(HUDBlueprintsButton*))(Il2CppBase() + 0x144BB84))(this);
	}
	template <typename R = void> R Bindb__0_0() {
		return ((R (*)(HUDBlueprintsButton*))(Il2CppBase() + 0x144BD54))(this);
	}

};

