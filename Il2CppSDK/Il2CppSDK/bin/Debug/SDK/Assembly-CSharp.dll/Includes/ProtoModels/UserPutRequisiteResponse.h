#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserPutRequisiteResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserPutRequisiteResponse"));
	}

	 static MessageParser1ProtoModels::UserPutRequisiteResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::UserPutRequisiteResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::UserPutRequisiteResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserPutRequisiteResponse*>* (*)(void *))(Il2CppBase() + 0x2475264))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x24752C8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x24753E8))(this);
	}
	template <typename R = ProtoModels::UserPutRequisiteResponse*> R Clone() {
		return ((R (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x24754E4))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x2475540))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserPutRequisiteResponse*, int64_t))(Il2CppBase() + 0x2475548))(this, value);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x2475550))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(UserPutRequisiteResponse*, int32_t))(Il2CppBase() + 0x2475558))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x2475560))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(UserPutRequisiteResponse*, Il2CppString*))(Il2CppBase() + 0x2475568))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserPutRequisiteResponse*, Il2CppObject*))(Il2CppBase() + 0x24755E8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserPutRequisiteResponse* other) {
		return ((R (*)(UserPutRequisiteResponse*, ProtoModels::UserPutRequisiteResponse*))(Il2CppBase() + 0x2475658))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x24756BC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x2475750))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserPutRequisiteResponse*, uintptr_t))(Il2CppBase() + 0x24757B4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x247586C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserPutRequisiteResponse* other) {
		return ((R (*)(UserPutRequisiteResponse*, ProtoModels::UserPutRequisiteResponse*))(Il2CppBase() + 0x2475970))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserPutRequisiteResponse*, uintptr_t))(Il2CppBase() + 0x24759B0))(this, input);
	}

};

}
