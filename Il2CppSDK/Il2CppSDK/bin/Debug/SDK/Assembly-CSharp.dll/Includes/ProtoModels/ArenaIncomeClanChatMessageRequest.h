#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaIncomeClanChatMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaIncomeClanChatMessageRequest"));
	}

	template <typename T = MessageParser1ArenaIncomeClanChatMessageRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& IsGlobaMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isGlobaMap_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ClanChatMessageBlock*> T& message_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1ArenaIncomeClanChatMessageRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E28480))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E284E4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E28604))(this);
	}
	template <typename T = ArenaIncomeClanChatMessageRequest*> T Clone() {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E286D0))(this);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E2872C))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*, int64_t))(Il2CppBase() + 0x1E28734))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E2873C))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*, int64_t))(Il2CppBase() + 0x1E28744))(this, value);
	}
	template <typename T = bool> T get_IsGlobaMap() {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E2874C))(this);
	}
	template <typename T = void> T set_IsGlobaMap(bool value) {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*, bool))(Il2CppBase() + 0x1E28754))(this, value);
	}
	template <typename T = ClanChatMessageBlock*> T get_Message() {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E28760))(this);
	}
	template <typename T = void> T set_Message(ClanChatMessageBlock* value) {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*, ClanChatMessageBlock*))(Il2CppBase() + 0x1E28768))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*, Il2CppObject*))(Il2CppBase() + 0x1E28770))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaIncomeClanChatMessageRequest* other) {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*, ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E287E0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E2884C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E288F4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E28958))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E28A34))(this);
	}
	template <typename T = void> T MergeFrom(ArenaIncomeClanChatMessageRequest* other) {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*, ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E28B44))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaIncomeClanChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E28C14))(this, input);
	}

};

}
