#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatWindowHelper"));
	}


	template <typename R = ChatWindow*> static R ShowChat(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x173CA48))(0, manager);
	}
	template <typename R = void> static R CloseChat(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x173CB04))(0, manager);
	}
	template <typename R = void> static R UpdateChatWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1736D50))(0, manager);
	}
	template <typename R = ChatWindow*> static R GetChatWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x173CC00))(0, manager);
	}

};

