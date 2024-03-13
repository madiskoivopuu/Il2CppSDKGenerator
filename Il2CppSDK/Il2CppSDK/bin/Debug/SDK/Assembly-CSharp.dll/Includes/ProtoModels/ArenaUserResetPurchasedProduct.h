#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserResetPurchasedProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserResetPurchasedProduct"));
	}

	template <typename T = MessageParser1ArenaUserResetPurchasedProduct*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& ProductIDsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_productIDs_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1int64_t>*> T& productIDs_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaUserResetPurchasedProduct*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2864CC4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2864D28))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x2864E48))(this);
	}
	template <typename T = ArenaUserResetPurchasedProduct*> T Clone() {
		return ((T (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x2864FB0))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x286500C))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserResetPurchasedProduct*, int64_t))(Il2CppBase() + 0x2865014))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x286501C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserResetPurchasedProduct*, int64_t))(Il2CppBase() + 0x2865024))(this, value);
	}
	template <typename T = RepeatedField1int64_t>*> T get_ProductIDs() {
		return ((T (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x286502C))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserResetPurchasedProduct*, Il2CppObject*))(Il2CppBase() + 0x2865034))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserResetPurchasedProduct* other) {
		return ((T (*)(ArenaUserResetPurchasedProduct*, ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x28650A4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x2865150))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x28651D4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserResetPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x2865238))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x2865330))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserResetPurchasedProduct* other) {
		return ((T (*)(ArenaUserResetPurchasedProduct*, ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x2865458))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserResetPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x28654E8))(this, input);
	}

};

}
