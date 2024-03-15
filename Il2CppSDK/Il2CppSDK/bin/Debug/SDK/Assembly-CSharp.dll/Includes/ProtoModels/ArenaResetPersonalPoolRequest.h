#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaResetPersonalPoolRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaResetPersonalPoolRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaResetPersonalPoolRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaResetPersonalPoolRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& StoreTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& storeType_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CategoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& category_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CoinPriceFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& coinPrice_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::ArenaResetPersonalPoolRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaResetPersonalPoolRequest*>* (*)(void *))(Il2CppBase() + 0x270EB3C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x270EBA0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270ECC0))(this);
	}
	template <typename R = ProtoModels::ArenaResetPersonalPoolRequest*> R Clone() {
		return ((R (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EDE8))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EE44))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaResetPersonalPoolRequest*, int64_t))(Il2CppBase() + 0x270EE4C))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EE54))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaResetPersonalPoolRequest*, int64_t))(Il2CppBase() + 0x270EE5C))(this, value);
	}
	template <typename R = Il2CppString*> R get_StoreType() {
		return ((R (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EE64))(this);
	}
	template <typename R = void> R set_StoreType(Il2CppString* value) {
		return ((R (*)(ArenaResetPersonalPoolRequest*, Il2CppString*))(Il2CppBase() + 0x270EE6C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Category() {
		return ((R (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EEEC))(this);
	}
	template <typename R = void> R set_Category(Il2CppString* value) {
		return ((R (*)(ArenaResetPersonalPoolRequest*, Il2CppString*))(Il2CppBase() + 0x270EEF4))(this, value);
	}
	template <typename R = int32_t> R get_CoinPrice() {
		return ((R (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EF74))(this);
	}
	template <typename R = void> R set_CoinPrice(int32_t value) {
		return ((R (*)(ArenaResetPersonalPoolRequest*, int32_t))(Il2CppBase() + 0x270EF7C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaResetPersonalPoolRequest*, Il2CppObject*))(Il2CppBase() + 0x270EF84))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaResetPersonalPoolRequest* other) {
		return ((R (*)(ArenaResetPersonalPoolRequest*, ProtoModels::ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EFF4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270F088))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270F158))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaResetPersonalPoolRequest*, uintptr_t))(Il2CppBase() + 0x270F1BC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270F2D4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaResetPersonalPoolRequest* other) {
		return ((R (*)(ArenaResetPersonalPoolRequest*, ProtoModels::ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270F458))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaResetPersonalPoolRequest*, uintptr_t))(Il2CppBase() + 0x270F4D4))(this, input);
	}

};

}
