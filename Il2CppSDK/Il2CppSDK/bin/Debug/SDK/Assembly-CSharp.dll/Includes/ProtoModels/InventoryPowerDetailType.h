#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class InventoryPowerDetailType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "InventoryPowerDetailType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& HealthPowerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& healthPower_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& EquipPowerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& equipPower_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& MountPowerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& mountPower_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MountGradeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& mountGrade_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& ClassPowerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& classPower_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ClassGradeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& classGrade_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& SummaryPowerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& summaryPower_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1232B5C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1232BC0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232CE0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232DA8))(this);
	}
	template <typename T = int32_t> T get_HealthPower() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E04))(this);
	}
	template <typename T = void> T set_HealthPower(int32_t value) {
		return ((T (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E0C))(this, value);
	}
	template <typename T = int32_t> T get_EquipPower() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E14))(this);
	}
	template <typename T = void> T set_EquipPower(int32_t value) {
		return ((T (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E1C))(this, value);
	}
	template <typename T = int32_t> T get_MountPower() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E24))(this);
	}
	template <typename T = void> T set_MountPower(int32_t value) {
		return ((T (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E2C))(this, value);
	}
	template <typename T = int32_t> T get_MountGrade() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E34))(this);
	}
	template <typename T = void> T set_MountGrade(int32_t value) {
		return ((T (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E3C))(this, value);
	}
	template <typename T = int32_t> T get_ClassPower() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E44))(this);
	}
	template <typename T = void> T set_ClassPower(int32_t value) {
		return ((T (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E4C))(this, value);
	}
	template <typename T = int32_t> T get_ClassGrade() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E54))(this);
	}
	template <typename T = void> T set_ClassGrade(int32_t value) {
		return ((T (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E5C))(this, value);
	}
	template <typename T = int32_t> T get_SummaryPower() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232E64))(this);
	}
	template <typename T = void> T set_SummaryPower(int32_t value) {
		return ((T (*)(InventoryPowerDetailType*, int32_t))(Il2CppBase() + 0x1232E6C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(InventoryPowerDetailType*, uintptr_t))(Il2CppBase() + 0x1232E74))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(InventoryPowerDetailType*, uintptr_t))(Il2CppBase() + 0x1232EE4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1232F74))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x123306C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(InventoryPowerDetailType*, uintptr_t))(Il2CppBase() + 0x12330D0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(InventoryPowerDetailType*))(Il2CppBase() + 0x1233230))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(InventoryPowerDetailType*, uintptr_t))(Il2CppBase() + 0x1233418))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(InventoryPowerDetailType*, uintptr_t))(Il2CppBase() + 0x1233474))(this, input);
	}

};

}
