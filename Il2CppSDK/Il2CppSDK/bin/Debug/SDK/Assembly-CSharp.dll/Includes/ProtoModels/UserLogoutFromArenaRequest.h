#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserLogoutFromArenaRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserLogoutFromArenaRequest"));
	}

	 static MessageParser1<ProtoModels::UserLogoutFromArenaRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserLogoutFromArenaRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& FromWorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& fromWorldID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& InventoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R& inventory_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& IsWorldFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isWorld_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::UserLogoutFromArenaRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserLogoutFromArenaRequest*>* (*)(void *))(Il2CppBase() + 0x246EA1C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246EA80))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246EBA0))(this);
	}
	template <typename R = ProtoModels::UserLogoutFromArenaRequest*> R Clone() {
		return ((R (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246EC78))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ECD4))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserLogoutFromArenaRequest*, int64_t))(Il2CppBase() + 0x246ECDC))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ECE4))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UserLogoutFromArenaRequest*, int64_t))(Il2CppBase() + 0x246ECEC))(this, value);
	}
	template <typename R = int64_t> R get_FromWorldID() {
		return ((R (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ECF4))(this);
	}
	template <typename R = void> R set_FromWorldID(int64_t value) {
		return ((R (*)(UserLogoutFromArenaRequest*, int64_t))(Il2CppBase() + 0x246ECFC))(this, value);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R get_Inventory() {
		return ((R (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ED04))(this);
	}
	template <typename R = void> R set_Inventory(ProtoModels::ArenaUserInventoryData* value) {
		return ((R (*)(UserLogoutFromArenaRequest*, ProtoModels::ArenaUserInventoryData*))(Il2CppBase() + 0x246ED0C))(this, value);
	}
	template <typename R = bool> R get_IsWorld() {
		return ((R (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ED14))(this);
	}
	template <typename R = void> R set_IsWorld(bool value) {
		return ((R (*)(UserLogoutFromArenaRequest*, bool))(Il2CppBase() + 0x246ED1C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserLogoutFromArenaRequest*, Il2CppObject*))(Il2CppBase() + 0x246ED28))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserLogoutFromArenaRequest* other) {
		return ((R (*)(UserLogoutFromArenaRequest*, ProtoModels::UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ED98))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246EE34))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246EEF8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserLogoutFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x246EF5C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246F064))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserLogoutFromArenaRequest* other) {
		return ((R (*)(UserLogoutFromArenaRequest*, ProtoModels::UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246F1AC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserLogoutFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x246F280))(this, input);
	}

};

}
