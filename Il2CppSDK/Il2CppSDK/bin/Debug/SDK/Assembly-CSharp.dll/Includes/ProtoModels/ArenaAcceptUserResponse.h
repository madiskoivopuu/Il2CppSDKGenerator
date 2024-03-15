#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAcceptUserResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAcceptUserResponse"));
	}

	 static MessageParser1<ProtoModels::ArenaAcceptUserResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaAcceptUserResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CoinsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::MigrationCurrencyCoins*> R& coins_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& Dev2DevIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& dev2DevID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ArenaAcceptUserResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaAcceptUserResponse*>* (*)(void *))(Il2CppBase() + 0x189B59C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x189B600))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B720))(this);
	}
	template <typename R = ProtoModels::ArenaAcceptUserResponse*> R Clone() {
		return ((R (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B85C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B8B8))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaAcceptUserResponse*, int32_t))(Il2CppBase() + 0x189B8C0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B8C8))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaAcceptUserResponse*, Il2CppString*))(Il2CppBase() + 0x189B8D0))(this, value);
	}
	template <typename R = ProtoModels::MigrationCurrencyCoins*> R get_Coins() {
		return ((R (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B950))(this);
	}
	template <typename R = void> R set_Coins(ProtoModels::MigrationCurrencyCoins* value) {
		return ((R (*)(ArenaAcceptUserResponse*, ProtoModels::MigrationCurrencyCoins*))(Il2CppBase() + 0x189B958))(this, value);
	}
	template <typename R = Il2CppString*> R get_Dev2DevID() {
		return ((R (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B960))(this);
	}
	template <typename R = void> R set_Dev2DevID(Il2CppString* value) {
		return ((R (*)(ArenaAcceptUserResponse*, Il2CppString*))(Il2CppBase() + 0x189B968))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaAcceptUserResponse*, Il2CppObject*))(Il2CppBase() + 0x189B9E8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaAcceptUserResponse* other) {
		return ((R (*)(ArenaAcceptUserResponse*, ProtoModels::ArenaAcceptUserResponse*))(Il2CppBase() + 0x189BA58))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189BAE4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189BB90))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaAcceptUserResponse*, uintptr_t))(Il2CppBase() + 0x189BBF4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189BCE0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaAcceptUserResponse* other) {
		return ((R (*)(ArenaAcceptUserResponse*, ProtoModels::ArenaAcceptUserResponse*))(Il2CppBase() + 0x189BE28))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaAcceptUserResponse*, uintptr_t))(Il2CppBase() + 0x189BF14))(this, input);
	}

};

}
