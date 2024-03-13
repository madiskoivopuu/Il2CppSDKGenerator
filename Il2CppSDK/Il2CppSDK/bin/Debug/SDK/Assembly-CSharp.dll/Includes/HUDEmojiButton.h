#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDEmojiButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDEmojiButton"));
	}


	template <typename T = void> T Bind(IHUDWindow* window) {
		return ((T (*)(HUDEmojiButton*, IHUDWindow*))(Il2CppBase() + 0x14522A8))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDEmojiButton*, float))(Il2CppBase() + 0x1452368))(this, deltaTime);
	}
	template <typename T = void> T Bindb__0_0() {
		return ((T (*)(HUDEmojiButton*))(Il2CppBase() + 0x1452474))(this);
	}

};

