#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserIncomeToMapSlotRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserIncomeToMapSlotRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MapSlotFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapSlot_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& InventoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& inventory_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& LocationIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& locationID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& FallbackLocationIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& fallbackLocationID_() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x285C6C0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x285C724))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C844))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C928))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C984))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C98C))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C994))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C99C))(this, value);
	}
	template <typename T = int64_t> T get_MapSlot() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C9A4))(this);
	}
	template <typename T = void> T set_MapSlot(int64_t value) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C9AC))(this, value);
	}
	template <typename T = uintptr_t> T get_Inventory() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C9B4))(this);
	}
	template <typename T = void> T set_Inventory(uintptr_t value) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x285C9BC))(this, value);
	}
	template <typename T = int64_t> T get_LocationID() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C9C4))(this);
	}
	template <typename T = void> T set_LocationID(int64_t value) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C9CC))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C9D4))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C9DC))(this, value);
	}
	template <typename T = int64_t> T get_FallbackLocationID() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285C9E4))(this);
	}
	template <typename T = void> T set_FallbackLocationID(int64_t value) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, int64_t))(Il2CppBase() + 0x285C9EC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x285C9F4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x285CA64))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285CB14))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285CC08))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x285CC6C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*))(Il2CppBase() + 0x285CDCC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x285CFB4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserIncomeToMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x285D098))(this, input);
	}

};

}
