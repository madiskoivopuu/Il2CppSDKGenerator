#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaIncomeTournamentChatMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaIncomeTournamentChatMessageRequest"));
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
		return ((T (*)(void *))(Il2CppBase() + 0x1E298E4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E29948))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29A68))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29BE8))(this);
	}
	template <typename T = void*> T get_UserID() {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29C44))(this);
	}
	template <typename T = uintptr_t> T get_Message() {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29C4C))(this);
	}
	template <typename T = void> T set_Message(uintptr_t value) {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E29C54))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E29C5C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E29CCC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29D6C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29DC4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E29E28))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29F04))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E29FF0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaIncomeTournamentChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E2A0C4))(this, input);
	}

};

}
