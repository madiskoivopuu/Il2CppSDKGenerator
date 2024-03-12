#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMessageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMessageEntity"));
	}


	template <typename T = uintptr_t> T get_message() {
		return ((T (*)(IMessageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMessage() {
		return ((T (*)(IMessageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMessage(Il2CppString* newValue) {
		return ((T (*)(IMessageEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceMessage(Il2CppString* newValue) {
		return ((T (*)(IMessageEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveMessage() {
		return ((T (*)(IMessageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
