#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreCurrencyPack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreCurrencyPack"));
	}

	 static MessageParser1ProtoModels::ArenaStoreCurrencyPack*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaStoreCurrencyPack*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CurrencyTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CurrencyTypeEnum*> R& currencyType_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	 static MessageParser1ProtoModels::ArenaStoreCurrencyPack*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaStoreCurrencyPack*>* (*)(void *))(Il2CppBase() + 0x2719F0C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2719F70))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A090))(this);
	}
	template <typename R = ProtoModels::ArenaStoreCurrencyPack*> R Clone() {
		return ((R (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A130))(this);
	}
	template <typename R = ProtoModels::CurrencyTypeEnum*> R get_CurrencyType() {
		return ((R (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A18C))(this);
	}
	template <typename R = void> R set_CurrencyType(ProtoModels::CurrencyTypeEnum* value) {
		return ((R (*)(ArenaStoreCurrencyPack*, ProtoModels::CurrencyTypeEnum*))(Il2CppBase() + 0x271A194))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A19C))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(ArenaStoreCurrencyPack*, int32_t))(Il2CppBase() + 0x271A1A4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStoreCurrencyPack*, Il2CppObject*))(Il2CppBase() + 0x271A1AC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStoreCurrencyPack* other) {
		return ((R (*)(ArenaStoreCurrencyPack*, ProtoModels::ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A248))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A288))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A2F4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStoreCurrencyPack*, uintptr_t))(Il2CppBase() + 0x271A358))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A3DC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStoreCurrencyPack* other) {
		return ((R (*)(ArenaStoreCurrencyPack*, ProtoModels::ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A490))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStoreCurrencyPack*, uintptr_t))(Il2CppBase() + 0x271A4B0))(this, input);
	}

};

}
