#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowChat(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x173CA48))(0, manager);
	}
	template <typename T = void> static T CloseChat(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x173CB04))(0, manager);
	}
	template <typename T = void> static T UpdateChatWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1736D50))(0, manager);
	}
	template <typename T = uintptr_t> static T GetChatWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x173CC00))(0, manager);
	}

};

}
