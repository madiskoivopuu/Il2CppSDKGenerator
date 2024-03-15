#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalMapPveType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalMapPveType"));
	}

	 static MessageParser1ProtoModels::GlobalMapPveType*>*& _parser() {
		return *(MessageParser1ProtoModels::GlobalMapPveType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MapSlotIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapSlotID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MapPveIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapPveID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MapFirstPveIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapFirstPveID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& IsStaticFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isStatic_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& IsHomeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isHome_() {
		return *(R*)((uintptr_t)this + 0x31);
	}
	template <typename R = int32_t> static R& TransportFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_transport_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1Il2CppString*>*& transport_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& NeedLocationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_needLocation_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1Il2CppString*>*& needLocation_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& NeedLocationPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_needLocationPoints_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1Il2CppString*>*& needLocationPoints_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& EventTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& eventTag_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& OwnerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& ownerID_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& WorldPeriodCircleSecondsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldPeriodCircleSeconds_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& WorldCirclePeriodOffsetFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldCirclePeriodOffset_() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	 static MessageParser1ProtoModels::GlobalMapPveType*>* get_Parser() {
		return ((MessageParser1ProtoModels::GlobalMapPveType*>* (*)(void *))(Il2CppBase() + 0x12D947C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12D94E0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9600))(this);
	}
	template <typename R = ProtoModels::GlobalMapPveType*> R Clone() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9868))(this);
	}
	template <typename R = int64_t> R get_MapSlotID() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D98C4))(this);
	}
	template <typename R = void> R set_MapSlotID(int64_t value) {
		return ((R (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D98CC))(this, value);
	}
	template <typename R = int64_t> R get_MapPveID() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D98D4))(this);
	}
	template <typename R = void> R set_MapPveID(int64_t value) {
		return ((R (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D98DC))(this, value);
	}
	template <typename R = int64_t> R get_MapFirstPveID() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D98E4))(this);
	}
	template <typename R = void> R set_MapFirstPveID(int64_t value) {
		return ((R (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D98EC))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D98F4))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D98FC))(this, value);
	}
	template <typename R = bool> R get_IsStatic() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9904))(this);
	}
	template <typename R = void> R set_IsStatic(bool value) {
		return ((R (*)(GlobalMapPveType*, bool))(Il2CppBase() + 0x12D990C))(this, value);
	}
	template <typename R = bool> R get_IsHome() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9918))(this);
	}
	template <typename R = void> R set_IsHome(bool value) {
		return ((R (*)(GlobalMapPveType*, bool))(Il2CppBase() + 0x12D9920))(this, value);
	}
	 RepeatedField1Il2CppString*>* get_Transport() {
		return ((RepeatedField1Il2CppString*>* (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D992C))(this);
	}
	 RepeatedField1Il2CppString*>* get_NeedLocation() {
		return ((RepeatedField1Il2CppString*>* (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9934))(this);
	}
	 RepeatedField1Il2CppString*>* get_NeedLocationPoints() {
		return ((RepeatedField1Il2CppString*>* (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D993C))(this);
	}
	template <typename R = Il2CppString*> R get_EventTag() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9944))(this);
	}
	template <typename R = void> R set_EventTag(Il2CppString* value) {
		return ((R (*)(GlobalMapPveType*, Il2CppString*))(Il2CppBase() + 0x12D994C))(this, value);
	}
	template <typename R = int64_t> R get_OwnerID() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D99CC))(this);
	}
	template <typename R = void> R set_OwnerID(int64_t value) {
		return ((R (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D99D4))(this, value);
	}
	template <typename R = int64_t> R get_WorldPeriodCircleSeconds() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D99DC))(this);
	}
	template <typename R = void> R set_WorldPeriodCircleSeconds(int64_t value) {
		return ((R (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D99E4))(this, value);
	}
	template <typename R = int64_t> R get_WorldCirclePeriodOffset() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D99EC))(this);
	}
	template <typename R = void> R set_WorldCirclePeriodOffset(int64_t value) {
		return ((R (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D99F4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GlobalMapPveType*, Il2CppObject*))(Il2CppBase() + 0x12D99FC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GlobalMapPveType* other) {
		return ((R (*)(GlobalMapPveType*, ProtoModels::GlobalMapPveType*))(Il2CppBase() + 0x12D9A6C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9BE8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9DAC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GlobalMapPveType*, uintptr_t))(Il2CppBase() + 0x12D9E10))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GlobalMapPveType*))(Il2CppBase() + 0x12DA0CC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GlobalMapPveType* other) {
		return ((R (*)(GlobalMapPveType*, ProtoModels::GlobalMapPveType*))(Il2CppBase() + 0x12DA3E0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GlobalMapPveType*, uintptr_t))(Il2CppBase() + 0x12DA4F8))(this, input);
	}

};

}
