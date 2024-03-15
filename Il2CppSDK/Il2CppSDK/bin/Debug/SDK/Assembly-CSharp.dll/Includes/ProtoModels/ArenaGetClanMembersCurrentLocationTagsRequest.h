#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetClanMembersCurrentLocationTagsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetClanMembersCurrentLocationTagsRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaGetClanMembersCurrentLocationTagsRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaGetClanMembersCurrentLocationTagsRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaGetClanMembersCurrentLocationTagsRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaGetClanMembersCurrentLocationTagsRequest*>* (*)(void *))(Il2CppBase() + 0x1E223D8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2243C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E2255C))(this);
	}
	template <typename R = ProtoModels::ArenaGetClanMembersCurrentLocationTagsRequest*> R Clone() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E225FC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E22658))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, int64_t))(Il2CppBase() + 0x1E22660))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E22668))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, int64_t))(Il2CppBase() + 0x1E22670))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, Il2CppObject*))(Il2CppBase() + 0x1E22678))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGetClanMembersCurrentLocationTagsRequest* other) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, ProtoModels::ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E22714))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E22754))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E227C0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, uintptr_t))(Il2CppBase() + 0x1E22824))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E228A8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGetClanMembersCurrentLocationTagsRequest* other) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, ProtoModels::ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E2295C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, uintptr_t))(Il2CppBase() + 0x1E2297C))(this, input);
	}

};

}
