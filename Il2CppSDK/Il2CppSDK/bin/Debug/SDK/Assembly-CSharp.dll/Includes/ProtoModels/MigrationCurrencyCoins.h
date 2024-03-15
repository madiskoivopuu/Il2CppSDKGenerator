#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MigrationCurrencyCoins
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MigrationCurrencyCoins"));
	}

	 static MessageParser1<ProtoModels::MigrationCurrencyCoins*>*& _parser() {
		return *(MessageParser1<ProtoModels::MigrationCurrencyCoins*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& value_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& SaveFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& save_() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	 static MessageParser1<ProtoModels::MigrationCurrencyCoins*>* get_Parser() {
		return ((MessageParser1<ProtoModels::MigrationCurrencyCoins*>* (*)(void *))(Il2CppBase() + 0x12D1FE0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12D2044))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2164))(this);
	}
	template <typename R = ProtoModels::MigrationCurrencyCoins*> R Clone() {
		return ((R (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2204))(this);
	}
	template <typename R = int32_t> R get_Value() {
		return ((R (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2260))(this);
	}
	template <typename R = void> R set_Value(int32_t value) {
		return ((R (*)(MigrationCurrencyCoins*, int32_t))(Il2CppBase() + 0x12D2268))(this, value);
	}
	template <typename R = bool> R get_Save() {
		return ((R (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2270))(this);
	}
	template <typename R = void> R set_Save(bool value) {
		return ((R (*)(MigrationCurrencyCoins*, bool))(Il2CppBase() + 0x12D2278))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MigrationCurrencyCoins*, Il2CppObject*))(Il2CppBase() + 0x12D2284))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MigrationCurrencyCoins* other) {
		return ((R (*)(MigrationCurrencyCoins*, ProtoModels::MigrationCurrencyCoins*))(Il2CppBase() + 0x12D232C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2378))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D23EC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MigrationCurrencyCoins*, uintptr_t))(Il2CppBase() + 0x12D2450))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D24D4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MigrationCurrencyCoins* other) {
		return ((R (*)(MigrationCurrencyCoins*, ProtoModels::MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2560))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MigrationCurrencyCoins*, uintptr_t))(Il2CppBase() + 0x12D2580))(this, input);
	}

};

}
