#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreCurrencyPack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreCurrencyPack"));
	}

	template <typename T = MessageParser1ArenaStoreCurrencyPack*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CurrencyTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CurrencyTypeEnum*> T& currencyType_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = MessageParser1ArenaStoreCurrencyPack*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2719F0C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2719F70))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A090))(this);
	}
	template <typename T = ArenaStoreCurrencyPack*> T Clone() {
		return ((T (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A130))(this);
	}
	template <typename T = CurrencyTypeEnum*> T get_CurrencyType() {
		return ((T (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A18C))(this);
	}
	template <typename T = void> T set_CurrencyType(CurrencyTypeEnum* value) {
		return ((T (*)(ArenaStoreCurrencyPack*, CurrencyTypeEnum*))(Il2CppBase() + 0x271A194))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A19C))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(ArenaStoreCurrencyPack*, int32_t))(Il2CppBase() + 0x271A1A4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaStoreCurrencyPack*, Il2CppObject*))(Il2CppBase() + 0x271A1AC))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaStoreCurrencyPack* other) {
		return ((T (*)(ArenaStoreCurrencyPack*, ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A248))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A288))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A2F4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStoreCurrencyPack*, uintptr_t))(Il2CppBase() + 0x271A358))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A3DC))(this);
	}
	template <typename T = void> T MergeFrom(ArenaStoreCurrencyPack* other) {
		return ((T (*)(ArenaStoreCurrencyPack*, ArenaStoreCurrencyPack*))(Il2CppBase() + 0x271A490))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStoreCurrencyPack*, uintptr_t))(Il2CppBase() + 0x271A4B0))(this, input);
	}

};

}
