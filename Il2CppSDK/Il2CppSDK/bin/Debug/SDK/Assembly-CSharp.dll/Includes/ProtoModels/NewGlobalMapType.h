#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class NewGlobalMapType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "NewGlobalMapType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapSlotFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapSlot_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PveIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pveID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& IsHomeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isHome_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& IsStaticFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isStatic_() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = int32_t> static T& IsEnemyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isEnemy_() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ClanNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& clanName_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& TransportFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_transport_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& transport_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& NeedLocationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_needLocation_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& needLocation_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& NeedLocationPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_needLocationPoints_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> T& needLocationPoints_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& PlayerIncomeChanceFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& playerIncomeChance_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& TimeLocationResetFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& timeLocationReset_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& OwnerNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& ownerName_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& PortalDataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& portalData_() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x13ABA30))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x13ABA94))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABBB4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABE6C))(this);
	}
	template <typename T = int64_t> T get_MapSlot() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABEC8))(this);
	}
	template <typename T = void> T set_MapSlot(int64_t value) {
		return ((T (*)(NewGlobalMapType*, int64_t))(Il2CppBase() + 0x13ABED0))(this, value);
	}
	template <typename T = int64_t> T get_PveID() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABED8))(this);
	}
	template <typename T = void> T set_PveID(int64_t value) {
		return ((T (*)(NewGlobalMapType*, int64_t))(Il2CppBase() + 0x13ABEE0))(this, value);
	}
	template <typename T = bool> T get_IsHome() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABEE8))(this);
	}
	template <typename T = void> T set_IsHome(bool value) {
		return ((T (*)(NewGlobalMapType*, bool))(Il2CppBase() + 0x13ABEF0))(this, value);
	}
	template <typename T = bool> T get_IsStatic() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABEFC))(this);
	}
	template <typename T = void> T set_IsStatic(bool value) {
		return ((T (*)(NewGlobalMapType*, bool))(Il2CppBase() + 0x13ABF04))(this, value);
	}
	template <typename T = bool> T get_IsEnemy() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABF10))(this);
	}
	template <typename T = void> T set_IsEnemy(bool value) {
		return ((T (*)(NewGlobalMapType*, bool))(Il2CppBase() + 0x13ABF18))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABF24))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(NewGlobalMapType*, int64_t))(Il2CppBase() + 0x13ABF2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClanName() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABF34))(this);
	}
	template <typename T = void> T set_ClanName(Il2CppString* value) {
		return ((T (*)(NewGlobalMapType*, Il2CppString*))(Il2CppBase() + 0x13ABF3C))(this, value);
	}
	template <typename T = void*> T get_Transport() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFBC))(this);
	}
	template <typename T = void*> T get_NeedLocation() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFC4))(this);
	}
	template <typename T = void*> T get_NeedLocationPoints() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFCC))(this);
	}
	template <typename T = int32_t> T get_PlayerIncomeChance() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFD4))(this);
	}
	template <typename T = void> T set_PlayerIncomeChance(int32_t value) {
		return ((T (*)(NewGlobalMapType*, int32_t))(Il2CppBase() + 0x13ABFDC))(this, value);
	}
	template <typename T = int64_t> T get_TimeLocationReset() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFE4))(this);
	}
	template <typename T = void> T set_TimeLocationReset(int64_t value) {
		return ((T (*)(NewGlobalMapType*, int64_t))(Il2CppBase() + 0x13ABFEC))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFF4))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(NewGlobalMapType*, int64_t))(Il2CppBase() + 0x13ABFFC))(this, value);
	}
	template <typename T = Il2CppString*> T get_OwnerName() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13AC004))(this);
	}
	template <typename T = void> T set_OwnerName(Il2CppString* value) {
		return ((T (*)(NewGlobalMapType*, Il2CppString*))(Il2CppBase() + 0x13AC00C))(this, value);
	}
	template <typename T = uintptr_t> T get_PortalData() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13AC08C))(this);
	}
	template <typename T = void> T set_PortalData(uintptr_t value) {
		return ((T (*)(NewGlobalMapType*, uintptr_t))(Il2CppBase() + 0x13AC094))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(NewGlobalMapType*, uintptr_t))(Il2CppBase() + 0x13AC09C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(NewGlobalMapType*, uintptr_t))(Il2CppBase() + 0x13AC10C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13AC2C4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13AC4BC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(NewGlobalMapType*, uintptr_t))(Il2CppBase() + 0x13AC520))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(NewGlobalMapType*))(Il2CppBase() + 0x13AC83C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(NewGlobalMapType*, uintptr_t))(Il2CppBase() + 0x13ACBA0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(NewGlobalMapType*, uintptr_t))(Il2CppBase() + 0x13ACD38))(this, input);
	}

};

}
