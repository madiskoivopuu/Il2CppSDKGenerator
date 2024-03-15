#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminUpdateTagsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminUpdateTagsRequest"));
	}

	 static MessageParser1ProtoModels::AdminUpdateTagsRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminUpdateTagsRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& AccountIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& accountID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NewTagsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& newTags_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::AdminUpdateTagsRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminUpdateTagsRequest*>* (*)(void *))(Il2CppBase() + 0x1296464))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12964C8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x12965E8))(this);
	}
	template <typename R = ProtoModels::AdminUpdateTagsRequest*> R Clone() {
		return ((R (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x1296690))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x12966EC))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminUpdateTagsRequest*, int64_t))(Il2CppBase() + 0x12966F4))(this, value);
	}
	template <typename R = int64_t> R get_AccountID() {
		return ((R (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x12966FC))(this);
	}
	template <typename R = void> R set_AccountID(int64_t value) {
		return ((R (*)(AdminUpdateTagsRequest*, int64_t))(Il2CppBase() + 0x1296704))(this, value);
	}
	template <typename R = int64_t> R get_NewTags() {
		return ((R (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x129670C))(this);
	}
	template <typename R = void> R set_NewTags(int64_t value) {
		return ((R (*)(AdminUpdateTagsRequest*, int64_t))(Il2CppBase() + 0x1296714))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminUpdateTagsRequest*, Il2CppObject*))(Il2CppBase() + 0x129671C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminUpdateTagsRequest* other) {
		return ((R (*)(AdminUpdateTagsRequest*, ProtoModels::AdminUpdateTagsRequest*))(Il2CppBase() + 0x12967C8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x1296818))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x12968A0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminUpdateTagsRequest*, uintptr_t))(Il2CppBase() + 0x1296904))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x12969B4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminUpdateTagsRequest* other) {
		return ((R (*)(AdminUpdateTagsRequest*, ProtoModels::AdminUpdateTagsRequest*))(Il2CppBase() + 0x1296AAC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminUpdateTagsRequest*, uintptr_t))(Il2CppBase() + 0x1296AD8))(this, input);
	}

};

}
