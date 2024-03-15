#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class NewGlobalMapType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "NewGlobalMapType"));
	}

	 static MessageParser1<ProtoModels::NewGlobalMapType*>*& _parser() {
		return *(MessageParser1<ProtoModels::NewGlobalMapType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MapSlotFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapSlot_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PveIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pveID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& IsHomeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isHome_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& IsStaticFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isStatic_() {
		return *(R*)((uintptr_t)this + 0x21);
	}
	template <typename R = int32_t> static R& IsEnemyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isEnemy_() {
		return *(R*)((uintptr_t)this + 0x22);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ClanNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& clanName_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& TransportFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_transport_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<Il2CppString*>*& transport_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& NeedLocationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_needLocation_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<Il2CppString*>*& needLocation_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& NeedLocationPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_needLocationPoints_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1<Il2CppString*>*& needLocationPoints_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& PlayerIncomeChanceFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& playerIncomeChance_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& TimeLocationResetFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& timeLocationReset_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& OwnerNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& ownerName_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& PortalDataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaPortalInfoData*> R& portalData_() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	 static MessageParser1<ProtoModels::NewGlobalMapType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::NewGlobalMapType*>* (*)(void *))(Il2CppBase() + 0x13ABA30))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x13ABA94))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABBB4))(this);
	}
	template <typename R = ProtoModels::NewGlobalMapType*> R Clone() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABE6C))(this);
	}
	template <typename R = int64_t> R get_MapSlot() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABEC8))(this);
	}
	template <typename R = void> R set_MapSlot(int64_t value) {
		return ((R (*)(NewGlobalMapType*, int64_t))(Il2CppBase() + 0x13ABED0))(this, value);
	}
	template <typename R = int64_t> R get_PveID() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABED8))(this);
	}
	template <typename R = void> R set_PveID(int64_t value) {
		return ((R (*)(NewGlobalMapType*, int64_t))(Il2CppBase() + 0x13ABEE0))(this, value);
	}
	template <typename R = bool> R get_IsHome() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABEE8))(this);
	}
	template <typename R = void> R set_IsHome(bool value) {
		return ((R (*)(NewGlobalMapType*, bool))(Il2CppBase() + 0x13ABEF0))(this, value);
	}
	template <typename R = bool> R get_IsStatic() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABEFC))(this);
	}
	template <typename R = void> R set_IsStatic(bool value) {
		return ((R (*)(NewGlobalMapType*, bool))(Il2CppBase() + 0x13ABF04))(this, value);
	}
	template <typename R = bool> R get_IsEnemy() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABF10))(this);
	}
	template <typename R = void> R set_IsEnemy(bool value) {
		return ((R (*)(NewGlobalMapType*, bool))(Il2CppBase() + 0x13ABF18))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABF24))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(NewGlobalMapType*, int64_t))(Il2CppBase() + 0x13ABF2C))(this, value);
	}
	template <typename R = Il2CppString*> R get_ClanName() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABF34))(this);
	}
	template <typename R = void> R set_ClanName(Il2CppString* value) {
		return ((R (*)(NewGlobalMapType*, Il2CppString*))(Il2CppBase() + 0x13ABF3C))(this, value);
	}
	 RepeatedField1<Il2CppString*>* get_Transport() {
		return ((RepeatedField1<Il2CppString*>* (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFBC))(this);
	}
	 RepeatedField1<Il2CppString*>* get_NeedLocation() {
		return ((RepeatedField1<Il2CppString*>* (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFC4))(this);
	}
	 RepeatedField1<Il2CppString*>* get_NeedLocationPoints() {
		return ((RepeatedField1<Il2CppString*>* (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFCC))(this);
	}
	template <typename R = int32_t> R get_PlayerIncomeChance() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFD4))(this);
	}
	template <typename R = void> R set_PlayerIncomeChance(int32_t value) {
		return ((R (*)(NewGlobalMapType*, int32_t))(Il2CppBase() + 0x13ABFDC))(this, value);
	}
	template <typename R = int64_t> R get_TimeLocationReset() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFE4))(this);
	}
	template <typename R = void> R set_TimeLocationReset(int64_t value) {
		return ((R (*)(NewGlobalMapType*, int64_t))(Il2CppBase() + 0x13ABFEC))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13ABFF4))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(NewGlobalMapType*, int64_t))(Il2CppBase() + 0x13ABFFC))(this, value);
	}
	template <typename R = Il2CppString*> R get_OwnerName() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13AC004))(this);
	}
	template <typename R = void> R set_OwnerName(Il2CppString* value) {
		return ((R (*)(NewGlobalMapType*, Il2CppString*))(Il2CppBase() + 0x13AC00C))(this, value);
	}
	template <typename R = ProtoModels::ArenaPortalInfoData*> R get_PortalData() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13AC08C))(this);
	}
	template <typename R = void> R set_PortalData(ProtoModels::ArenaPortalInfoData* value) {
		return ((R (*)(NewGlobalMapType*, ProtoModels::ArenaPortalInfoData*))(Il2CppBase() + 0x13AC094))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(NewGlobalMapType*, Il2CppObject*))(Il2CppBase() + 0x13AC09C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::NewGlobalMapType* other) {
		return ((R (*)(NewGlobalMapType*, ProtoModels::NewGlobalMapType*))(Il2CppBase() + 0x13AC10C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13AC2C4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13AC4BC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(NewGlobalMapType*, uintptr_t))(Il2CppBase() + 0x13AC520))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(NewGlobalMapType*))(Il2CppBase() + 0x13AC83C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::NewGlobalMapType* other) {
		return ((R (*)(NewGlobalMapType*, ProtoModels::NewGlobalMapType*))(Il2CppBase() + 0x13ACBA0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(NewGlobalMapType*, uintptr_t))(Il2CppBase() + 0x13ACD38))(this, input);
	}

};

}
