#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class KickUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "KickUserRequest"));
	}

	 static MessageParser1<ProtoModels::KickUserRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::KickUserRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ToClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Clan*> R& toClan_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& FromClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Clan*> R& fromClan_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::KickUserRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::KickUserRequest*>* (*)(void *))(Il2CppBase() + 0x14EC584))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x14EC5E8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(KickUserRequest*))(Il2CppBase() + 0x14EC708))(this);
	}
	template <typename R = ProtoModels::KickUserRequest*> R Clone() {
		return ((R (*)(KickUserRequest*))(Il2CppBase() + 0x14EC7EC))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(KickUserRequest*))(Il2CppBase() + 0x14EC848))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(KickUserRequest*, int64_t))(Il2CppBase() + 0x14EC850))(this, value);
	}
	template <typename R = ProtoModels::Clan*> R get_ToClan() {
		return ((R (*)(KickUserRequest*))(Il2CppBase() + 0x14EC858))(this);
	}
	template <typename R = void> R set_ToClan(ProtoModels::Clan* value) {
		return ((R (*)(KickUserRequest*, ProtoModels::Clan*))(Il2CppBase() + 0x14EC860))(this, value);
	}
	template <typename R = ProtoModels::Clan*> R get_FromClan() {
		return ((R (*)(KickUserRequest*))(Il2CppBase() + 0x14EC868))(this);
	}
	template <typename R = void> R set_FromClan(ProtoModels::Clan* value) {
		return ((R (*)(KickUserRequest*, ProtoModels::Clan*))(Il2CppBase() + 0x14EC870))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(KickUserRequest*, Il2CppObject*))(Il2CppBase() + 0x14EC878))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::KickUserRequest* other) {
		return ((R (*)(KickUserRequest*, ProtoModels::KickUserRequest*))(Il2CppBase() + 0x14EC8E8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(KickUserRequest*))(Il2CppBase() + 0x14EC95C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(KickUserRequest*))(Il2CppBase() + 0x14EC9DC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(KickUserRequest*, uintptr_t))(Il2CppBase() + 0x14ECA40))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(KickUserRequest*))(Il2CppBase() + 0x14ECAF0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::KickUserRequest* other) {
		return ((R (*)(KickUserRequest*, ProtoModels::KickUserRequest*))(Il2CppBase() + 0x14ECBE8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(KickUserRequest*, uintptr_t))(Il2CppBase() + 0x14ECCF4))(this, input);
	}

};

}
