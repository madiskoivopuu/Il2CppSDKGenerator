#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserIncomeToMapSlotRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserIncomeToMapSlotRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaUserIncomeToMapSlotRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserIncomeToMapSlotRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MapSlotFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapSlot_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& InventoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R& inventory_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& LocationIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& locationID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& FallbackLocationIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& fallbackLocationID_() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	 static MessageParser1<ProtoModels::ArenaUserIncomeToMapSlotRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserIncomeToMapSlotRequest*>* (*)(void *))(Il2CppBase() + 0x285C6C0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x285C724))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C844))(this);
	}
	template <typename R = ProtoModels::ArenaUserIncomeToMapSlotRequest*> R Clone() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C928))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C984))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C98C))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C994))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C99C))(this, value);
	}
	template <typename R = int64_t> R get_MapSlot() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C9A4))(this);
	}
	template <typename R = void> R set_MapSlot(int64_t value) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C9AC))(this, value);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R get_Inventory() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C9B4))(this);
	}
	template <typename R = void> R set_Inventory(ProtoModels::ArenaUserInventoryData* value) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, ProtoModels::ArenaUserInventoryData*))(Il2CppBase() + 0x285C9BC))(this, value);
	}
	template <typename R = int64_t> R get_LocationID() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C9C4))(this);
	}
	template <typename R = void> R set_LocationID(int64_t value) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C9CC))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C9D4))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C9DC))(this, value);
	}
	template <typename R = int64_t> R get_FallbackLocationID() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C9E4))(this);
	}
	template <typename R = void> R set_FallbackLocationID(int64_t value) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C9EC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, Il2CppObject*))(Il2CppBase() + 0x285C9F4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserIncomeToMapSlotRequest* other) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, ProtoModels::ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285CA64))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285CB14))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285CC08))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x285CC6C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285CDCC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserIncomeToMapSlotRequest* other) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, ProtoModels::ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285CFB4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserIncomeToMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x285D098))(this, input);
	}

};

}
