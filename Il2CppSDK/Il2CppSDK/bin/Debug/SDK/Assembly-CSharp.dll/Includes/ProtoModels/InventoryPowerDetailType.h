#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class InventoryPowerDetailType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "InventoryPowerDetailType"));
	}

	 static MessageParser1<ProtoModels::InventoryPowerDetailType*>*& _parser() {
		return *(MessageParser1<ProtoModels::InventoryPowerDetailType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& HealthPowerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& healthPower_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& EquipPowerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& equipPower_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& MountPowerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& mountPower_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MountGradeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& mountGrade_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> static R& ClassPowerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& classPower_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ClassGradeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& classGrade_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& SummaryPowerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& summaryPower_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::InventoryPowerDetailType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::InventoryPowerDetailType*>* (*)(void *))(Il2CppBase() + 0x1232B5C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1232BC0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232CE0))(this);
	}
	template <typename R = ProtoModels::InventoryPowerDetailType*> R Clone() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232DA8))(this);
	}
	template <typename R = int32_t> R get_HealthPower() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E04))(this);
	}
	template <typename R = void> R set_HealthPower(int32_t value) {
		return ((R (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E0C))(this, value);
	}
	template <typename R = int32_t> R get_EquipPower() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E14))(this);
	}
	template <typename R = void> R set_EquipPower(int32_t value) {
		return ((R (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E1C))(this, value);
	}
	template <typename R = int32_t> R get_MountPower() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E24))(this);
	}
	template <typename R = void> R set_MountPower(int32_t value) {
		return ((R (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E2C))(this, value);
	}
	template <typename R = int32_t> R get_MountGrade() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E34))(this);
	}
	template <typename R = void> R set_MountGrade(int32_t value) {
		return ((R (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E3C))(this, value);
	}
	template <typename R = int32_t> R get_ClassPower() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E44))(this);
	}
	template <typename R = void> R set_ClassPower(int32_t value) {
		return ((R (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E4C))(this, value);
	}
	template <typename R = int32_t> R get_ClassGrade() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E54))(this);
	}
	template <typename R = void> R set_ClassGrade(int32_t value) {
		return ((R (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E5C))(this, value);
	}
	template <typename R = int32_t> R get_SummaryPower() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E64))(this);
	}
	template <typename R = void> R set_SummaryPower(int32_t value) {
		return ((R (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E6C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(InventoryPowerDetailType*, Il2CppObject*))(Il2CppBase() + 0x1232E74))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::InventoryPowerDetailType* other) {
		return ((R (*)(InventoryPowerDetailType*, ProtoModels::InventoryPowerDetailType*))(Il2CppBase() + 0x1232EE4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232F74))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x123306C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(InventoryPowerDetailType*, uintptr_t))(Il2CppBase() + 0x12330D0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1233230))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::InventoryPowerDetailType* other) {
		return ((R (*)(InventoryPowerDetailType*, ProtoModels::InventoryPowerDetailType*))(Il2CppBase() + 0x1233418))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(InventoryPowerDetailType*, uintptr_t))(Il2CppBase() + 0x1233474))(this, input);
	}

};

}
