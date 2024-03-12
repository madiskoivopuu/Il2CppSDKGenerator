#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaIncomePvpChatMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaIncomePvpChatMessageRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_userID_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& message_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E28E6C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E28ED0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E28FF0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E29170))(this);
	}
	template <typename T = void*> T get_UserID() {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E291CC))(this);
	}
	template <typename T = uintptr_t> T get_Message() {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E291D4))(this);
	}
	template <typename T = void> T set_Message(uintptr_t value) {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E291DC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E291E4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E29254))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E292F4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E2934C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E293B0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E2948C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E29578))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaIncomePvpChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E2964C))(this, input);
	}

};

}
