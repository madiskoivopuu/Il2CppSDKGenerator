#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserResetPurchasedProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserResetPurchasedProduct"));
	}

	 static MessageParser1<ProtoModels::ArenaUserResetPurchasedProduct*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserResetPurchasedProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& ProductIDsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_productIDs_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<int64_t>*& productIDs_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ArenaUserResetPurchasedProduct*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserResetPurchasedProduct*>* (*)(void *))(Il2CppBase() + 0x2864CC4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2864D28))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x2864E48))(this);
	}
	template <typename R = ProtoModels::ArenaUserResetPurchasedProduct*> R Clone() {
		return ((R (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x2864FB0))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x286500C))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUserResetPurchasedProduct*, int64_t))(Il2CppBase() + 0x2865014))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x286501C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserResetPurchasedProduct*, int64_t))(Il2CppBase() + 0x2865024))(this, value);
	}
	 RepeatedField1<int64_t>* get_ProductIDs() {
		return ((RepeatedField1<int64_t>* (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x286502C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserResetPurchasedProduct*, Il2CppObject*))(Il2CppBase() + 0x2865034))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserResetPurchasedProduct* other) {
		return ((R (*)(ArenaUserResetPurchasedProduct*, ProtoModels::ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x28650A4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x2865150))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x28651D4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserResetPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x2865238))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x2865330))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserResetPurchasedProduct* other) {
		return ((R (*)(ArenaUserResetPurchasedProduct*, ProtoModels::ArenaUserResetPurchasedProduct*))(Il2CppBase() + 0x2865458))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserResetPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x28654E8))(this, input);
	}

};

}
