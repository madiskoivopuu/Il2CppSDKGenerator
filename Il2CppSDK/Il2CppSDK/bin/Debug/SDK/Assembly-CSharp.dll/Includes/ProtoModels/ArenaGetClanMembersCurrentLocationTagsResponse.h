#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetClanMembersCurrentLocationTagsResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetClanMembersCurrentLocationTagsResponse"));
	}

	 static MessageParser1ProtoModels::ArenaGetClanMembersCurrentLocationTagsResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaGetClanMembersCurrentLocationTagsResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& ClanMemberLocDataByUserIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codecint64_t, ProtoModels::ClanMemberLocationData*>*& _map_clanMemberLocDataByUserId_codec() {
		return *(Codecint64_t, ProtoModels::ClanMemberLocationData*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2int64_t, ProtoModels::ClanMemberLocationData*>*& clanMemberLocDataByUserId_() {
		return *(MapField2int64_t, ProtoModels::ClanMemberLocationData*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaGetClanMembersCurrentLocationTagsResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaGetClanMembersCurrentLocationTagsResponse*>* (*)(void *))(Il2CppBase() + 0x1E22B1C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E22B80))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22CA0))(this);
	}
	template <typename R = ProtoModels::ArenaGetClanMembersCurrentLocationTagsResponse*> R Clone() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22E34))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22E90))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, int32_t))(Il2CppBase() + 0x1E22E98))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22EA0))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, Il2CppString*))(Il2CppBase() + 0x1E22EA8))(this, value);
	}
	 MapField2int64_t, ProtoModels::ClanMemberLocationData*>* get_ClanMemberLocDataByUserId() {
		return ((MapField2int64_t, ProtoModels::ClanMemberLocationData*>* (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22F28))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, Il2CppObject*))(Il2CppBase() + 0x1E22F30))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGetClanMembersCurrentLocationTagsResponse* other) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, ProtoModels::ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22FA0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E23050))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E230D8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, uintptr_t))(Il2CppBase() + 0x1E2313C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E2323C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGetClanMembersCurrentLocationTagsResponse* other) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, ProtoModels::ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E2336C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, uintptr_t))(Il2CppBase() + 0x1E23408))(this, input);
	}

};

}
