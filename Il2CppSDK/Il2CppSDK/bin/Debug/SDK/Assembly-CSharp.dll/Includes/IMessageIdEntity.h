#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMessageIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMessageIdEntity"));
	}


	template <typename R = MessageIdComponent*> R get_messageId() {
		return ((R (*)(IMessageIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMessageId() {
		return ((R (*)(IMessageIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMessageId(int64_t newId) {
		return ((R (*)(IMessageIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceMessageId(int64_t newId) {
		return ((R (*)(IMessageIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveMessageId() {
		return ((R (*)(IMessageIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

