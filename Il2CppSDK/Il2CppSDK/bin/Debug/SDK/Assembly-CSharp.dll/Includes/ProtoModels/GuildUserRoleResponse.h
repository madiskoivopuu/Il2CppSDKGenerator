#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildUserRoleResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildUserRoleResponse"));
	}

	 static MessageParser1ProtoModels::GuildUserRoleResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::GuildUserRoleResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& PlayerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Player*> R& player_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::GuildUserRoleResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::GuildUserRoleResponse*>* (*)(void *))(Il2CppBase() + 0x1947B1C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1947B80))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947CA0))(this);
	}
	template <typename R = ProtoModels::GuildUserRoleResponse*> R Clone() {
		return ((R (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947DBC))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947E18))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(GuildUserRoleResponse*, int32_t))(Il2CppBase() + 0x1947E20))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947E28))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(GuildUserRoleResponse*, Il2CppString*))(Il2CppBase() + 0x1947E30))(this, value);
	}
	template <typename R = ProtoModels::Player*> R get_Player() {
		return ((R (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947EB0))(this);
	}
	template <typename R = void> R set_Player(ProtoModels::Player* value) {
		return ((R (*)(GuildUserRoleResponse*, ProtoModels::Player*))(Il2CppBase() + 0x1947EB8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildUserRoleResponse*, Il2CppObject*))(Il2CppBase() + 0x1947EC0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildUserRoleResponse* other) {
		return ((R (*)(GuildUserRoleResponse*, ProtoModels::GuildUserRoleResponse*))(Il2CppBase() + 0x1947F30))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947FA4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1948030))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildUserRoleResponse*, uintptr_t))(Il2CppBase() + 0x1948094))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x194814C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildUserRoleResponse* other) {
		return ((R (*)(GuildUserRoleResponse*, ProtoModels::GuildUserRoleResponse*))(Il2CppBase() + 0x1948250))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildUserRoleResponse*, uintptr_t))(Il2CppBase() + 0x1948320))(this, input);
	}

};

}
