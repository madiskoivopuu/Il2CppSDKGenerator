#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MigrationCurrencyCoins
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MigrationCurrencyCoins"));
	}

	template <typename T = MessageParser1MigrationCurrencyCoins*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& value_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& SaveFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& save_() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = MessageParser1MigrationCurrencyCoins*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D1FE0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D2044))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2164))(this);
	}
	template <typename T = MigrationCurrencyCoins*> T Clone() {
		return ((T (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2204))(this);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2260))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(MigrationCurrencyCoins*, int32_t))(Il2CppBase() + 0x12D2268))(this, value);
	}
	template <typename T = bool> T get_Save() {
		return ((T (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2270))(this);
	}
	template <typename T = void> T set_Save(bool value) {
		return ((T (*)(MigrationCurrencyCoins*, bool))(Il2CppBase() + 0x12D2278))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(MigrationCurrencyCoins*, Il2CppObject*))(Il2CppBase() + 0x12D2284))(this, other);
	}
	template <typename T = bool> T Equals_1(MigrationCurrencyCoins* other) {
		return ((T (*)(MigrationCurrencyCoins*, MigrationCurrencyCoins*))(Il2CppBase() + 0x12D232C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2378))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D23EC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MigrationCurrencyCoins*, uintptr_t))(Il2CppBase() + 0x12D2450))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MigrationCurrencyCoins*))(Il2CppBase() + 0x12D24D4))(this);
	}
	template <typename T = void> T MergeFrom(MigrationCurrencyCoins* other) {
		return ((T (*)(MigrationCurrencyCoins*, MigrationCurrencyCoins*))(Il2CppBase() + 0x12D2560))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MigrationCurrencyCoins*, uintptr_t))(Il2CppBase() + 0x12D2580))(this, input);
	}

};

}
