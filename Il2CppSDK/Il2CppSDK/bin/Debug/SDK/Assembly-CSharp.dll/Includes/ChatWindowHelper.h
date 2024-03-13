#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatWindowHelper"));
	}


	template <typename T = ChatWindow*> static T ShowChat(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x173CA48))(0, manager);
	}
	template <typename T = void> static T CloseChat(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x173CB04))(0, manager);
	}
	template <typename T = void> static T UpdateChatWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1736D50))(0, manager);
	}
	template <typename T = ChatWindow*> static T GetChatWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x173CC00))(0, manager);
	}

};

