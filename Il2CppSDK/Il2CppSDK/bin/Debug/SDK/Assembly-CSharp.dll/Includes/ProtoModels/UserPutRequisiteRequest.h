#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserPutRequisiteRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserPutRequisiteRequest"));
	}

	 static MessageParser1ProtoModels::UserPutRequisiteRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::UserPutRequisiteRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PutRequisiteFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Requisite*> R& putRequisite_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::UserPutRequisiteRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserPutRequisiteRequest*>* (*)(void *))(Il2CppBase() + 0x2474954))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x24749B8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474AD8))(this);
	}
	template <typename R = ProtoModels::UserPutRequisiteRequest*> R Clone() {
		return ((R (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474B9C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474BF8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserPutRequisiteRequest*, int64_t))(Il2CppBase() + 0x2474C00))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474C08))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UserPutRequisiteRequest*, int64_t))(Il2CppBase() + 0x2474C10))(this, value);
	}
	template <typename R = ProtoModels::Requisite*> R get_PutRequisite() {
		return ((R (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474C18))(this);
	}
	template <typename R = void> R set_PutRequisite(ProtoModels::Requisite* value) {
		return ((R (*)(UserPutRequisiteRequest*, ProtoModels::Requisite*))(Il2CppBase() + 0x2474C20))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserPutRequisiteRequest*, Il2CppObject*))(Il2CppBase() + 0x2474C28))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserPutRequisiteRequest* other) {
		return ((R (*)(UserPutRequisiteRequest*, ProtoModels::UserPutRequisiteRequest*))(Il2CppBase() + 0x2474C98))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474CE4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474D68))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserPutRequisiteRequest*, uintptr_t))(Il2CppBase() + 0x2474DCC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474E7C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserPutRequisiteRequest* other) {
		return ((R (*)(UserPutRequisiteRequest*, ProtoModels::UserPutRequisiteRequest*))(Il2CppBase() + 0x2474F74))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserPutRequisiteRequest*, uintptr_t))(Il2CppBase() + 0x2475038))(this, input);
	}

};

}
