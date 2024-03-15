#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class BotCommandUserToArenaResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "BotCommandUserToArenaResponse"));
	}

	 static MessageParser1<ProtoModels::BotCommandUserToArenaResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::BotCommandUserToArenaResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& SessionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& sessionID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& InGlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& inGlobalMap_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& ConnectedFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& connected_() {
		return *(R*)((uintptr_t)this + 0x31);
	}
	template <typename R = int32_t> static R& OnlineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& online_() {
		return *(R*)((uintptr_t)this + 0x32);
	}

	 static MessageParser1<ProtoModels::BotCommandUserToArenaResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::BotCommandUserToArenaResponse*>* (*)(void *))(Il2CppBase() + 0x16D1E7C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16D1EE0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2000))(this);
	}
	template <typename R = ProtoModels::BotCommandUserToArenaResponse*> R Clone() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2120))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D217C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(BotCommandUserToArenaResponse*, int32_t))(Il2CppBase() + 0x16D2184))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D218C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(BotCommandUserToArenaResponse*, Il2CppString*))(Il2CppBase() + 0x16D2194))(this, value);
	}
	template <typename R = int64_t> R get_SessionID() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2214))(this);
	}
	template <typename R = void> R set_SessionID(int64_t value) {
		return ((R (*)(BotCommandUserToArenaResponse*, int64_t))(Il2CppBase() + 0x16D221C))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2224))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(BotCommandUserToArenaResponse*, int64_t))(Il2CppBase() + 0x16D222C))(this, value);
	}
	template <typename R = bool> R get_InGlobalMap() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2234))(this);
	}
	template <typename R = void> R set_InGlobalMap(bool value) {
		return ((R (*)(BotCommandUserToArenaResponse*, bool))(Il2CppBase() + 0x16D223C))(this, value);
	}
	template <typename R = bool> R get_Connected() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2248))(this);
	}
	template <typename R = void> R set_Connected(bool value) {
		return ((R (*)(BotCommandUserToArenaResponse*, bool))(Il2CppBase() + 0x16D2250))(this, value);
	}
	template <typename R = bool> R get_Online() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D225C))(this);
	}
	template <typename R = void> R set_Online(bool value) {
		return ((R (*)(BotCommandUserToArenaResponse*, bool))(Il2CppBase() + 0x16D2264))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(BotCommandUserToArenaResponse*, Il2CppObject*))(Il2CppBase() + 0x16D2270))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::BotCommandUserToArenaResponse* other) {
		return ((R (*)(BotCommandUserToArenaResponse*, ProtoModels::BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D22E0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D23BC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D24D0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(BotCommandUserToArenaResponse*, uintptr_t))(Il2CppBase() + 0x16D2534))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D269C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::BotCommandUserToArenaResponse* other) {
		return ((R (*)(BotCommandUserToArenaResponse*, ProtoModels::BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2810))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(BotCommandUserToArenaResponse*, uintptr_t))(Il2CppBase() + 0x16D2898))(this, input);
	}

};

}
