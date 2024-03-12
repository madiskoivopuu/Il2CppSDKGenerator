#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserPurchaseRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserPurchaseRequest"));
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
	template <typename T = int32_t> T& productID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& TransactionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& transaction_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x28629EC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2862A50))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862B70))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862C3C))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862C98))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserPurchaseRequest*, int64_t))(Il2CppBase() + 0x2862CA0))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862CA8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserPurchaseRequest*, int64_t))(Il2CppBase() + 0x2862CB0))(this, value);
	}
	template <typename T = int32_t> T get_ProductID() {
		return ((T (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862CB8))(this);
	}
	template <typename T = void> T set_ProductID(int32_t value) {
		return ((T (*)(ArenaUserPurchaseRequest*, int32_t))(Il2CppBase() + 0x2862CC0))(this, value);
	}
	template <typename T = uintptr_t> T get_Transaction() {
		return ((T (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862CC8))(this);
	}
	template <typename T = void> T set_Transaction(uintptr_t value) {
		return ((T (*)(ArenaUserPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x2862CD0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUserPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x2862CD8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUserPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x2862D48))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862DA4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862E48))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x2862EAC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862F88))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUserPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x28630BC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x286318C))(this, input);
	}

};

}
