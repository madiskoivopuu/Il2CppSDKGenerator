#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserAddRaidKarmaRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserAddRaidKarmaRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaUserAddRaidKarmaRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserAddRaidKarmaRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& value_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ArenaUserAddRaidKarmaRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserAddRaidKarmaRequest*>* (*)(void *))(Il2CppBase() + 0xF579F8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF57A5C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57B7C))(this);
	}
	template <typename R = ProtoModels::ArenaUserAddRaidKarmaRequest*> R Clone() {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57C2C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57C88))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*, int64_t))(Il2CppBase() + 0xF57C90))(this, value);
	}
	template <typename R = int32_t> R get_Value() {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57C98))(this);
	}
	template <typename R = void> R set_Value(int32_t value) {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*, int32_t))(Il2CppBase() + 0xF57CA0))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57CA8))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*, int64_t))(Il2CppBase() + 0xF57CB0))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57CB8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*, int64_t))(Il2CppBase() + 0xF57CC0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*, Il2CppObject*))(Il2CppBase() + 0xF57CC8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserAddRaidKarmaRequest* other) {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*, ProtoModels::ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57D38))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57D98))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57E40))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*, uintptr_t))(Il2CppBase() + 0xF57EA4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57F80))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserAddRaidKarmaRequest* other) {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*, ProtoModels::ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF580B4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserAddRaidKarmaRequest*, uintptr_t))(Il2CppBase() + 0xF580EC))(this, input);
	}

};

}
