#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class BotCommandUserToArenaRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "BotCommandUserToArenaRequest"));
	}

	 static MessageParser1<ProtoModels::BotCommandUserToArenaRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::BotCommandUserToArenaRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& SessionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& sessionID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CommandFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& command_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::BotCommandUserToArenaRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::BotCommandUserToArenaRequest*>* (*)(void *))(Il2CppBase() + 0x16D1568))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16D15CC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D16EC))(this);
	}
	template <typename R = ProtoModels::BotCommandUserToArenaRequest*> R Clone() {
		return ((R (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D17E8))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1844))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(BotCommandUserToArenaRequest*, int64_t))(Il2CppBase() + 0x16D184C))(this, value);
	}
	template <typename R = int64_t> R get_SessionID() {
		return ((R (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1854))(this);
	}
	template <typename R = void> R set_SessionID(int64_t value) {
		return ((R (*)(BotCommandUserToArenaRequest*, int64_t))(Il2CppBase() + 0x16D185C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Command() {
		return ((R (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1864))(this);
	}
	template <typename R = void> R set_Command(Il2CppString* value) {
		return ((R (*)(BotCommandUserToArenaRequest*, Il2CppString*))(Il2CppBase() + 0x16D186C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(BotCommandUserToArenaRequest*, Il2CppObject*))(Il2CppBase() + 0x16D18EC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::BotCommandUserToArenaRequest* other) {
		return ((R (*)(BotCommandUserToArenaRequest*, ProtoModels::BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D195C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D19C0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1A50))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(BotCommandUserToArenaRequest*, uintptr_t))(Il2CppBase() + 0x16D1AB4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1B6C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::BotCommandUserToArenaRequest* other) {
		return ((R (*)(BotCommandUserToArenaRequest*, ProtoModels::BotCommandUserToArenaRequest*))(Il2CppBase() + 0x16D1C70))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(BotCommandUserToArenaRequest*, uintptr_t))(Il2CppBase() + 0x16D1CB0))(this, input);
	}

};

}
