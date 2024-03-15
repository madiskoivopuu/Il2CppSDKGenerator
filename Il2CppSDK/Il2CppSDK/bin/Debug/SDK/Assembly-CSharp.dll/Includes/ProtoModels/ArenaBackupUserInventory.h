#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBackupUserInventory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBackupUserInventory"));
	}

	 static MessageParser1ProtoModels::ArenaBackupUserInventory*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaBackupUserInventory*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& InventoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R& inventory_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaBackupUserInventory*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaBackupUserInventory*>* (*)(void *))(Il2CppBase() + 0x1A15CC4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A15D28))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A15E48))(this);
	}
	template <typename R = ProtoModels::ArenaBackupUserInventory*> R Clone() {
		return ((R (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A15F04))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A15F60))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaBackupUserInventory*, int64_t))(Il2CppBase() + 0x1A15F68))(this, value);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R get_Inventory() {
		return ((R (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A15F70))(this);
	}
	template <typename R = void> R set_Inventory(ProtoModels::ArenaUserInventoryData* value) {
		return ((R (*)(ArenaBackupUserInventory*, ProtoModels::ArenaUserInventoryData*))(Il2CppBase() + 0x1A15F78))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaBackupUserInventory*, Il2CppObject*))(Il2CppBase() + 0x1A15F80))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaBackupUserInventory* other) {
		return ((R (*)(ArenaBackupUserInventory*, ProtoModels::ArenaBackupUserInventory*))(Il2CppBase() + 0x1A15FF0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A1602C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A16094))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaBackupUserInventory*, uintptr_t))(Il2CppBase() + 0x1A160F8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaBackupUserInventory*))(Il2CppBase() + 0x1A1617C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaBackupUserInventory* other) {
		return ((R (*)(ArenaBackupUserInventory*, ProtoModels::ArenaBackupUserInventory*))(Il2CppBase() + 0x1A16230))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaBackupUserInventory*, uintptr_t))(Il2CppBase() + 0x1A162E8))(this, input);
	}

};

}
