#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MapSlotFirstIncomeType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MapSlotFirstIncomeType"));
	}

	 static MessageParser1ProtoModels::MapSlotFirstIncomeType*>*& _parser() {
		return *(MessageParser1ProtoModels::MapSlotFirstIncomeType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PveIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pveID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& FirstEndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& firstEndTime_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::MapSlotFirstIncomeType*>* get_Parser() {
		return ((MessageParser1ProtoModels::MapSlotFirstIncomeType*>* (*)(void *))(Il2CppBase() + 0x12C5A90))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12C5AF4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5C14))(this);
	}
	template <typename R = ProtoModels::MapSlotFirstIncomeType*> R Clone() {
		return ((R (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5CB4))(this);
	}
	template <typename R = int64_t> R get_PveID() {
		return ((R (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5D10))(this);
	}
	template <typename R = void> R set_PveID(int64_t value) {
		return ((R (*)(MapSlotFirstIncomeType*, int64_t))(Il2CppBase() + 0x12C5D18))(this, value);
	}
	template <typename R = int64_t> R get_FirstEndTime() {
		return ((R (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5D20))(this);
	}
	template <typename R = void> R set_FirstEndTime(int64_t value) {
		return ((R (*)(MapSlotFirstIncomeType*, int64_t))(Il2CppBase() + 0x12C5D28))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MapSlotFirstIncomeType*, Il2CppObject*))(Il2CppBase() + 0x12C5D30))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MapSlotFirstIncomeType* other) {
		return ((R (*)(MapSlotFirstIncomeType*, ProtoModels::MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5DCC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5E0C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5E78))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MapSlotFirstIncomeType*, uintptr_t))(Il2CppBase() + 0x12C5EDC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5F60))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MapSlotFirstIncomeType* other) {
		return ((R (*)(MapSlotFirstIncomeType*, ProtoModels::MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C6014))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MapSlotFirstIncomeType*, uintptr_t))(Il2CppBase() + 0x12C6034))(this, input);
	}

};

}
