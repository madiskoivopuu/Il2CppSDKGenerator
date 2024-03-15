#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMessageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMessageEntity"));
	}


	template <typename R = MessageComponent*> R get_message() {
		return ((R (*)(IMessageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMessage() {
		return ((R (*)(IMessageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMessage(Il2CppString* newValue) {
		return ((R (*)(IMessageEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceMessage(Il2CppString* newValue) {
		return ((R (*)(IMessageEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveMessage() {
		return ((R (*)(IMessageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

