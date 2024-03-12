#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserStoreExpirenceRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserStoreExpirenceRequest"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = int32_t> static T& ProductIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& productID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& TotalExpFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& totalExp_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BA814))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BA878))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BA998))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAA48))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAAA4))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UserStoreExpirenceRequest*, int64_t))(Il2CppBase() + 0x15BAAAC))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAAB4))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserStoreExpirenceRequest*, int64_t))(Il2CppBase() + 0x15BAABC))(this, value);
	}
	template <typename T = int64_t> T get_ProductID() {
		return ((T (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAAC4))(this);
	}
	template <typename T = void> T set_ProductID(int64_t value) {
		return ((T (*)(UserStoreExpirenceRequest*, int64_t))(Il2CppBase() + 0x15BAACC))(this, value);
	}
	template <typename T = uint32_t> T get_TotalExp() {
		return ((T (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAAD4))(this);
	}
	template <typename T = void> T set_TotalExp(uint32_t value) {
		return ((T (*)(UserStoreExpirenceRequest*, uint32_t))(Il2CppBase() + 0x15BAADC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserStoreExpirenceRequest*, uintptr_t))(Il2CppBase() + 0x15BAAE4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserStoreExpirenceRequest*, uintptr_t))(Il2CppBase() + 0x15BAB54))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BABB4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAC5C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserStoreExpirenceRequest*, uintptr_t))(Il2CppBase() + 0x15BACC0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserStoreExpirenceRequest*))(Il2CppBase() + 0x15BAD9C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserStoreExpirenceRequest*, uintptr_t))(Il2CppBase() + 0x15BAED0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserStoreExpirenceRequest*, uintptr_t))(Il2CppBase() + 0x15BAF08))(this, input);
	}

};

}
