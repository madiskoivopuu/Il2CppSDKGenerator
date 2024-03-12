#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalMapPveType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalMapPveType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapSlotIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapSlotID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MapPveIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapPveID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MapFirstPveIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapFirstPveID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& IsStaticFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isStatic_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& IsHomeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isHome_() {
		return *(T*)((uintptr_t)this + 0x31);
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
	template <typename T = int32_t> static T& EventTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& eventTag_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& OwnerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& ownerID_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& WorldPeriodCircleSecondsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldPeriodCircleSeconds_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& WorldCirclePeriodOffsetFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldCirclePeriodOffset_() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D947C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D94E0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9600))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9868))(this);
	}
	template <typename T = int64_t> T get_MapSlotID() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D98C4))(this);
	}
	template <typename T = void> T set_MapSlotID(int64_t value) {
		return ((T (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D98CC))(this, value);
	}
	template <typename T = int64_t> T get_MapPveID() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D98D4))(this);
	}
	template <typename T = void> T set_MapPveID(int64_t value) {
		return ((T (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D98DC))(this, value);
	}
	template <typename T = int64_t> T get_MapFirstPveID() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D98E4))(this);
	}
	template <typename T = void> T set_MapFirstPveID(int64_t value) {
		return ((T (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D98EC))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D98F4))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D98FC))(this, value);
	}
	template <typename T = bool> T get_IsStatic() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9904))(this);
	}
	template <typename T = void> T set_IsStatic(bool value) {
		return ((T (*)(GlobalMapPveType*, bool))(Il2CppBase() + 0x12D990C))(this, value);
	}
	template <typename T = bool> T get_IsHome() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9918))(this);
	}
	template <typename T = void> T set_IsHome(bool value) {
		return ((T (*)(GlobalMapPveType*, bool))(Il2CppBase() + 0x12D9920))(this, value);
	}
	template <typename T = void*> T get_Transport() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D992C))(this);
	}
	template <typename T = void*> T get_NeedLocation() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9934))(this);
	}
	template <typename T = void*> T get_NeedLocationPoints() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D993C))(this);
	}
	template <typename T = Il2CppString*> T get_EventTag() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9944))(this);
	}
	template <typename T = void> T set_EventTag(Il2CppString* value) {
		return ((T (*)(GlobalMapPveType*, Il2CppString*))(Il2CppBase() + 0x12D994C))(this, value);
	}
	template <typename T = int64_t> T get_OwnerID() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D99CC))(this);
	}
	template <typename T = void> T set_OwnerID(int64_t value) {
		return ((T (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D99D4))(this, value);
	}
	template <typename T = int64_t> T get_WorldPeriodCircleSeconds() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D99DC))(this);
	}
	template <typename T = void> T set_WorldPeriodCircleSeconds(int64_t value) {
		return ((T (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D99E4))(this, value);
	}
	template <typename T = int64_t> T get_WorldCirclePeriodOffset() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D99EC))(this);
	}
	template <typename T = void> T set_WorldCirclePeriodOffset(int64_t value) {
		return ((T (*)(GlobalMapPveType*, int64_t))(Il2CppBase() + 0x12D99F4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GlobalMapPveType*, uintptr_t))(Il2CppBase() + 0x12D99FC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GlobalMapPveType*, uintptr_t))(Il2CppBase() + 0x12D9A6C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9BE8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12D9DAC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GlobalMapPveType*, uintptr_t))(Il2CppBase() + 0x12D9E10))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GlobalMapPveType*))(Il2CppBase() + 0x12DA0CC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GlobalMapPveType*, uintptr_t))(Il2CppBase() + 0x12DA3E0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GlobalMapPveType*, uintptr_t))(Il2CppBase() + 0x12DA4F8))(this, input);
	}

};

}
