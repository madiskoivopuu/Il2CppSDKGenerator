#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetClanMembersCurrentLocationTagsResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetClanMembersCurrentLocationTagsResponse"));
	}

	template <typename T = MessageParser1ArenaGetClanMembersCurrentLocationTagsResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ClanMemberLocDataByUserIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Codecint64_t, ClanMemberLocationData*>*> static T& _map_clanMemberLocDataByUserId_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = MapField2int64_t, ClanMemberLocationData*>*> T& clanMemberLocDataByUserId_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaGetClanMembersCurrentLocationTagsResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E22B1C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E22B80))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22CA0))(this);
	}
	template <typename T = ArenaGetClanMembersCurrentLocationTagsResponse*> T Clone() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22E34))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22E90))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, int32_t))(Il2CppBase() + 0x1E22E98))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22EA0))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, Il2CppString*))(Il2CppBase() + 0x1E22EA8))(this, value);
	}
	template <typename T = MapField2int64_t, ClanMemberLocationData*>*> T get_ClanMemberLocDataByUserId() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22F28))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, Il2CppObject*))(Il2CppBase() + 0x1E22F30))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaGetClanMembersCurrentLocationTagsResponse* other) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E22FA0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E23050))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E230D8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, uintptr_t))(Il2CppBase() + 0x1E2313C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E2323C))(this);
	}
	template <typename T = void> T MergeFrom(ArenaGetClanMembersCurrentLocationTagsResponse* other) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, ArenaGetClanMembersCurrentLocationTagsResponse*))(Il2CppBase() + 0x1E2336C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsResponse*, uintptr_t))(Il2CppBase() + 0x1E23408))(this, input);
	}

};

}
