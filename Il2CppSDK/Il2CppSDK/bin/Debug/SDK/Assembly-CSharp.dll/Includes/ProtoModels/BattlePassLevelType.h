#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class BattlePassLevelType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "BattlePassLevelType"));
	}

	template <typename T = MessageParser1BattlePassLevelType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CurrencyTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& currencyType_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& AddLevelsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& addLevels_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1BattlePassLevelType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x167AFFC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x167B060))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B180))(this);
	}
	template <typename T = BattlePassLevelType*> T Clone() {
		return ((T (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B278))(this);
	}
	template <typename T = Il2CppString*> T get_CurrencyType() {
		return ((T (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B2D4))(this);
	}
	template <typename T = void> T set_CurrencyType(Il2CppString* value) {
		return ((T (*)(BattlePassLevelType*, Il2CppString*))(Il2CppBase() + 0x167B2DC))(this, value);
	}
	template <typename T = int32_t> T get_AddLevels() {
		return ((T (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B35C))(this);
	}
	template <typename T = void> T set_AddLevels(int32_t value) {
		return ((T (*)(BattlePassLevelType*, int32_t))(Il2CppBase() + 0x167B364))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(BattlePassLevelType*, Il2CppObject*))(Il2CppBase() + 0x167B36C))(this, other);
	}
	template <typename T = bool> T Equals_1(BattlePassLevelType* other) {
		return ((T (*)(BattlePassLevelType*, BattlePassLevelType*))(Il2CppBase() + 0x167B3DC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B43C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B4B0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(BattlePassLevelType*, uintptr_t))(Il2CppBase() + 0x167B514))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B5A0))(this);
	}
	template <typename T = void> T MergeFrom(BattlePassLevelType* other) {
		return ((T (*)(BattlePassLevelType*, BattlePassLevelType*))(Il2CppBase() + 0x167B668))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(BattlePassLevelType*, uintptr_t))(Il2CppBase() + 0x167B6B4))(this, input);
	}

};

}
