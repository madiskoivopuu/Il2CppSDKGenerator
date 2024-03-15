#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalMapEnemyType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalMapEnemyType"));
	}

	 static MessageParser1<ProtoModels::GlobalMapEnemyType*>*& _parser() {
		return *(MessageParser1<ProtoModels::GlobalMapEnemyType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MapSlotIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapSlotID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ClanNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& clanName_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::GlobalMapEnemyType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GlobalMapEnemyType*>* (*)(void *))(Il2CppBase() + 0x12D78C8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12D792C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7A4C))(this);
	}
	template <typename R = ProtoModels::GlobalMapEnemyType*> R Clone() {
		return ((R (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7B50))(this);
	}
	template <typename R = int64_t> R get_MapSlotID() {
		return ((R (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7BAC))(this);
	}
	template <typename R = void> R set_MapSlotID(int64_t value) {
		return ((R (*)(GlobalMapEnemyType*, int64_t))(Il2CppBase() + 0x12D7BB4))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7BBC))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(GlobalMapEnemyType*, int64_t))(Il2CppBase() + 0x12D7BC4))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7BCC))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(GlobalMapEnemyType*, int64_t))(Il2CppBase() + 0x12D7BD4))(this, value);
	}
	template <typename R = Il2CppString*> R get_ClanName() {
		return ((R (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7BDC))(this);
	}
	template <typename R = void> R set_ClanName(Il2CppString* value) {
		return ((R (*)(GlobalMapEnemyType*, Il2CppString*))(Il2CppBase() + 0x12D7BE4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GlobalMapEnemyType*, Il2CppObject*))(Il2CppBase() + 0x12D7C64))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GlobalMapEnemyType* other) {
		return ((R (*)(GlobalMapEnemyType*, ProtoModels::GlobalMapEnemyType*))(Il2CppBase() + 0x12D7CD4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7D48))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7DF4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GlobalMapEnemyType*, uintptr_t))(Il2CppBase() + 0x12D7E58))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7F3C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GlobalMapEnemyType* other) {
		return ((R (*)(GlobalMapEnemyType*, ProtoModels::GlobalMapEnemyType*))(Il2CppBase() + 0x12D807C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GlobalMapEnemyType*, uintptr_t))(Il2CppBase() + 0x12D80C8))(this, input);
	}

};

}
