#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateUserCurrencyRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateUserCurrencyRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaUpdateUserCurrencyRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUpdateUserCurrencyRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& IsGlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isGlobalMap_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CurrencyTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CurrencyTypeEnum> R& currencyType_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& ValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& value_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ArenaUpdateUserCurrencyRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUpdateUserCurrencyRequest*>* (*)(void *))(Il2CppBase() + 0xF55B84))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF55BE8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55D08))(this);
	}
	template <typename R = ProtoModels::ArenaUpdateUserCurrencyRequest*> R Clone() {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55DC0))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55E1C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*, int64_t))(Il2CppBase() + 0xF55E24))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55E2C))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*, int64_t))(Il2CppBase() + 0xF55E34))(this, value);
	}
	template <typename R = bool> R get_IsGlobalMap() {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55E3C))(this);
	}
	template <typename R = void> R set_IsGlobalMap(bool value) {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*, bool))(Il2CppBase() + 0xF55E44))(this, value);
	}
	template <typename R = ProtoModels::CurrencyTypeEnum> R get_CurrencyType() {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55E50))(this);
	}
	template <typename R = void> R set_CurrencyType(ProtoModels::CurrencyTypeEnum value) {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*, ProtoModels::CurrencyTypeEnum))(Il2CppBase() + 0xF55E58))(this, value);
	}
	template <typename R = int32_t> R get_Value() {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55E60))(this);
	}
	template <typename R = void> R set_Value(int32_t value) {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*, int32_t))(Il2CppBase() + 0xF55E68))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*, Il2CppObject*))(Il2CppBase() + 0xF55E70))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUpdateUserCurrencyRequest* other) {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*, ProtoModels::ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55EE0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55F60))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF5602C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*, uintptr_t))(Il2CppBase() + 0xF56090))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF56198))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUpdateUserCurrencyRequest* other) {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*, ProtoModels::ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF562E4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUpdateUserCurrencyRequest*, uintptr_t))(Il2CppBase() + 0xF56328))(this, input);
	}

};

}
