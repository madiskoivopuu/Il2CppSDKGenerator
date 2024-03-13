#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetClanMembersCurrentLocationTagsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetClanMembersCurrentLocationTagsRequest"));
	}

	template <typename T = MessageParser1ArenaGetClanMembersCurrentLocationTagsRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ArenaGetClanMembersCurrentLocationTagsRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E223D8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2243C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E2255C))(this);
	}
	template <typename T = ArenaGetClanMembersCurrentLocationTagsRequest*> T Clone() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E225FC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E22658))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, int64_t))(Il2CppBase() + 0x1E22660))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E22668))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, int64_t))(Il2CppBase() + 0x1E22670))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, Il2CppObject*))(Il2CppBase() + 0x1E22678))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaGetClanMembersCurrentLocationTagsRequest* other) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E22714))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E22754))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E227C0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, uintptr_t))(Il2CppBase() + 0x1E22824))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E228A8))(this);
	}
	template <typename T = void> T MergeFrom(ArenaGetClanMembersCurrentLocationTagsRequest* other) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, ArenaGetClanMembersCurrentLocationTagsRequest*))(Il2CppBase() + 0x1E2295C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGetClanMembersCurrentLocationTagsRequest*, uintptr_t))(Il2CppBase() + 0x1E2297C))(this, input);
	}

};

}
