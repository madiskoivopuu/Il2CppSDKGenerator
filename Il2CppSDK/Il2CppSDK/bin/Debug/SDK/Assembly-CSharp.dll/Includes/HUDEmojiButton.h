#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDEmojiButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDEmojiButton"));
	}


	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDEmojiButton*, IHUDWindow*))(Il2CppBase() + 0x14522A8))(this, window);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDEmojiButton*, float))(Il2CppBase() + 0x1452368))(this, deltaTime);
	}
	template <typename R = void> R Bindb__0_0() {
		return ((R (*)(HUDEmojiButton*))(Il2CppBase() + 0x1452474))(this);
	}

};

