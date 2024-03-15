#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class BattlePassLevelType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "BattlePassLevelType"));
	}

	 static MessageParser1<ProtoModels::BattlePassLevelType*>*& _parser() {
		return *(MessageParser1<ProtoModels::BattlePassLevelType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CurrencyTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& currencyType_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& AddLevelsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& addLevels_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::BattlePassLevelType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::BattlePassLevelType*>* (*)(void *))(Il2CppBase() + 0x167AFFC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x167B060))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B180))(this);
	}
	template <typename R = ProtoModels::BattlePassLevelType*> R Clone() {
		return ((R (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B278))(this);
	}
	template <typename R = Il2CppString*> R get_CurrencyType() {
		return ((R (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B2D4))(this);
	}
	template <typename R = void> R set_CurrencyType(Il2CppString* value) {
		return ((R (*)(BattlePassLevelType*, Il2CppString*))(Il2CppBase() + 0x167B2DC))(this, value);
	}
	template <typename R = int32_t> R get_AddLevels() {
		return ((R (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B35C))(this);
	}
	template <typename R = void> R set_AddLevels(int32_t value) {
		return ((R (*)(BattlePassLevelType*, int32_t))(Il2CppBase() + 0x167B364))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(BattlePassLevelType*, Il2CppObject*))(Il2CppBase() + 0x167B36C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::BattlePassLevelType* other) {
		return ((R (*)(BattlePassLevelType*, ProtoModels::BattlePassLevelType*))(Il2CppBase() + 0x167B3DC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B43C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B4B0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(BattlePassLevelType*, uintptr_t))(Il2CppBase() + 0x167B514))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(BattlePassLevelType*))(Il2CppBase() + 0x167B5A0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::BattlePassLevelType* other) {
		return ((R (*)(BattlePassLevelType*, ProtoModels::BattlePassLevelType*))(Il2CppBase() + 0x167B668))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(BattlePassLevelType*, uintptr_t))(Il2CppBase() + 0x167B6B4))(this, input);
	}

};

}
