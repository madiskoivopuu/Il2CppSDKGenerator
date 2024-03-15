#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildInviteCreateResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildInviteCreateResponse"));
	}

	 static MessageParser1ProtoModels::GuildInviteCreateResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::GuildInviteCreateResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& GuildFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildMessageType*> R& guild_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LockTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lockTime_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::GuildInviteCreateResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::GuildInviteCreateResponse*>* (*)(void *))(Il2CppBase() + 0x1B2D4A8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1B2D50C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D62C))(this);
	}
	template <typename R = ProtoModels::GuildInviteCreateResponse*> R Clone() {
		return ((R (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D7AC))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D808))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(GuildInviteCreateResponse*, int32_t))(Il2CppBase() + 0x1B2D810))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D818))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(GuildInviteCreateResponse*, Il2CppString*))(Il2CppBase() + 0x1B2D820))(this, value);
	}
	template <typename R = ProtoModels::GuildMessageType*> R get_Guild() {
		return ((R (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D8A0))(this);
	}
	template <typename R = void> R set_Guild(ProtoModels::GuildMessageType* value) {
		return ((R (*)(GuildInviteCreateResponse*, ProtoModels::GuildMessageType*))(Il2CppBase() + 0x1B2D8A8))(this, value);
	}
	template <typename R = int64_t> R get_LockTime() {
		return ((R (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D8B0))(this);
	}
	template <typename R = void> R set_LockTime(int64_t value) {
		return ((R (*)(GuildInviteCreateResponse*, int64_t))(Il2CppBase() + 0x1B2D8B8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildInviteCreateResponse*, Il2CppObject*))(Il2CppBase() + 0x1B2D8C0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildInviteCreateResponse* other) {
		return ((R (*)(GuildInviteCreateResponse*, ProtoModels::GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D930))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D9B4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2DA60))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildInviteCreateResponse*, uintptr_t))(Il2CppBase() + 0x1B2DAC4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2DBA8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildInviteCreateResponse* other) {
		return ((R (*)(GuildInviteCreateResponse*, ProtoModels::GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2DCE8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildInviteCreateResponse*, uintptr_t))(Il2CppBase() + 0x1B2E128))(this, input);
	}

};

}
