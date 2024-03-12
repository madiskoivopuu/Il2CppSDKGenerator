#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class BotCommandUserToArenaRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "BotCommandUserToArenaRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& SessionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& sessionID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CommandFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& command_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D1568))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D15CC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D16EC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D17E8))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1844))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(BotCommandUserToArenaRequest*, int64_t))(Il2CppBase() + 0x16D184C))(this, value);
	}
	template <typename T = int64_t> T get_SessionID() {
		return ((T (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1854))(this);
	}
	template <typename T = void> T set_SessionID(int64_t value) {
		return ((T (*)(BotCommandUserToArenaRequest*, int64_t))(Il2CppBase() + 0x16D185C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Command() {
		return ((T (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1864))(this);
	}
	template <typename T = void> T set_Command(Il2CppString* value) {
		return ((T (*)(BotCommandUserToArenaRequest*, Il2CppString*))(Il2CppBase() + 0x16D186C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(BotCommandUserToArenaRequest*, uintptr_t))(Il2CppBase() + 0x16D18EC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(BotCommandUserToArenaRequest*, uintptr_t))(Il2CppBase() + 0x16D195C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D19C0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1A50))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(BotCommandUserToArenaRequest*, uintptr_t))(Il2CppBase() + 0x16D1AB4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1B6C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(BotCommandUserToArenaRequest*, uintptr_t))(Il2CppBase() + 0x16D1C70))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(BotCommandUserToArenaRequest*, uintptr_t))(Il2CppBase() + 0x16D1CB0))(this, input);
	}

};

}
