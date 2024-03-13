#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBackupUserInventory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBackupUserInventory"));
	}

	template <typename T = MessageParser1ArenaBackupUserInventory*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& InventoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaUserInventoryData*> T& inventory_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ArenaBackupUserInventory*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A15CC4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A15D28))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A15E48))(this);
	}
	template <typename T = ArenaBackupUserInventory*> T Clone() {
		return ((T (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A15F04))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A15F60))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaBackupUserInventory*, int64_t))(Il2CppBase() + 0x1A15F68))(this, value);
	}
	template <typename T = ArenaUserInventoryData*> T get_Inventory() {
		return ((T (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A15F70))(this);
	}
	template <typename T = void> T set_Inventory(ArenaUserInventoryData* value) {
		return ((T (*)(ArenaBackupUserInventory*, ArenaUserInventoryData*))(Il2CppBase() + 0x1A15F78))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaBackupUserInventory*, Il2CppObject*))(Il2CppBase() + 0x1A15F80))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaBackupUserInventory* other) {
		return ((T (*)(ArenaBackupUserInventory*, ArenaBackupUserInventory*))(Il2CppBase() + 0x1A15FF0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A1602C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A16094))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaBackupUserInventory*, uintptr_t))(Il2CppBase() + 0x1A160F8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A1617C))(this);
	}
	template <typename T = void> T MergeFrom(ArenaBackupUserInventory* other) {
		return ((T (*)(ArenaBackupUserInventory*, ArenaBackupUserInventory*))(Il2CppBase() + 0x1A16230))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaBackupUserInventory*, uintptr_t))(Il2CppBase() + 0x1A162E8))(this, input);
	}

};

}
