#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateUserCurrencyRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateUserCurrencyRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& IsGlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isGlobalMap_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CurrencyTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& currencyType_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& ValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& value_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF55B84))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF55BE8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55D08))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55DC0))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55E1C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*, int64_t))(Il2CppBase() + 0xF55E24))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55E2C))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*, int64_t))(Il2CppBase() + 0xF55E34))(this, value);
	}
	template <typename T = bool> T get_IsGlobalMap() {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55E3C))(this);
	}
	template <typename T = void> T set_IsGlobalMap(bool value) {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*, bool))(Il2CppBase() + 0xF55E44))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55E50))(this);
	}
	template <typename T = void> T set_CurrencyType(uintptr_t value) {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*, uintptr_t))(Il2CppBase() + 0xF55E58))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55E60))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*, int32_t))(Il2CppBase() + 0xF55E68))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*, uintptr_t))(Il2CppBase() + 0xF55E70))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*, uintptr_t))(Il2CppBase() + 0xF55EE0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF55F60))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF5602C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*, uintptr_t))(Il2CppBase() + 0xF56090))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*))(Il2CppBase() + 0xF56198))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*, uintptr_t))(Il2CppBase() + 0xF562E4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUpdateUserCurrencyRequest*, uintptr_t))(Il2CppBase() + 0xF56328))(this, input);
	}

};

}
