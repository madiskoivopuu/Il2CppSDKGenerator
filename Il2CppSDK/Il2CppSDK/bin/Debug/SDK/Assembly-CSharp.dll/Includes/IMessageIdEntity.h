#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMessageIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMessageIdEntity"));
	}


	template <typename T = uintptr_t> T get_messageId() {
		return ((T (*)(IMessageIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMessageId() {
		return ((T (*)(IMessageIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMessageId(int64_t newId) {
		return ((T (*)(IMessageIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceMessageId(int64_t newId) {
		return ((T (*)(IMessageIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveMessageId() {
		return ((T (*)(IMessageIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
