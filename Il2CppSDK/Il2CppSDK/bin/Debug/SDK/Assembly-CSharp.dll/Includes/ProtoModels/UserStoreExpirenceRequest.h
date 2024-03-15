#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserStoreExpirenceRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserStoreExpirenceRequest"));
	}

	 static MessageParser1<ProtoModels::UserStoreExpirenceRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserStoreExpirenceRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& ProductIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& productID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& TotalExpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint32_t> R& totalExp_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::UserStoreExpirenceRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserStoreExpirenceRequest*>* (*)(void *))(Il2CppBase() + 0x15BA814))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15BA878))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BA998))(this);
	}
	template <typename R = ProtoModels::UserStoreExpirenceRequest*> R Clone() {
		return ((R (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAA48))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAAA4))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UserStoreExpirenceRequest*, int64_t))(Il2CppBase() + 0x15BAAAC))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAAB4))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserStoreExpirenceRequest*, int64_t))(Il2CppBase() + 0x15BAABC))(this, value);
	}
	template <typename R = int64_t> R get_ProductID() {
		return ((R (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAAC4))(this);
	}
	template <typename R = void> R set_ProductID(int64_t value) {
		return ((R (*)(UserStoreExpirenceRequest*, int64_t))(Il2CppBase() + 0x15BAACC))(this, value);
	}
	template <typename R = uint32_t> R get_TotalExp() {
		return ((R (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAAD4))(this);
	}
	template <typename R = void> R set_TotalExp(uint32_t value) {
		return ((R (*)(UserStoreExpirenceRequest*, uint32_t))(Il2CppBase() + 0x15BAADC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserStoreExpirenceRequest*, Il2CppObject*))(Il2CppBase() + 0x15BAAE4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserStoreExpirenceRequest* other) {
		return ((R (*)(UserStoreExpirenceRequest*, ProtoModels::UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAB54))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BABB4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAC5C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserStoreExpirenceRequest*, uintptr_t))(Il2CppBase() + 0x15BACC0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAD9C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserStoreExpirenceRequest* other) {
		return ((R (*)(UserStoreExpirenceRequest*, ProtoModels::UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAED0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserStoreExpirenceRequest*, uintptr_t))(Il2CppBase() + 0x15BAF08))(this, input);
	}

};

}
