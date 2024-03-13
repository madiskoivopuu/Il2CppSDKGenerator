#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserLogoutFromArenaRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserLogoutFromArenaRequest"));
	}

	template <typename T = MessageParser1UserLogoutFromArenaRequest*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& FromWorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& fromWorldID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& InventoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaUserInventoryData*> T& inventory_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& IsWorldFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isWorld_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1UserLogoutFromArenaRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x246EA1C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246EA80))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246EBA0))(this);
	}
	template <typename T = UserLogoutFromArenaRequest*> T Clone() {
		return ((T (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246EC78))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ECD4))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserLogoutFromArenaRequest*, int64_t))(Il2CppBase() + 0x246ECDC))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ECE4))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UserLogoutFromArenaRequest*, int64_t))(Il2CppBase() + 0x246ECEC))(this, value);
	}
	template <typename T = int64_t> T get_FromWorldID() {
		return ((T (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ECF4))(this);
	}
	template <typename T = void> T set_FromWorldID(int64_t value) {
		return ((T (*)(UserLogoutFromArenaRequest*, int64_t))(Il2CppBase() + 0x246ECFC))(this, value);
	}
	template <typename T = ArenaUserInventoryData*> T get_Inventory() {
		return ((T (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ED04))(this);
	}
	template <typename T = void> T set_Inventory(ArenaUserInventoryData* value) {
		return ((T (*)(UserLogoutFromArenaRequest*, ArenaUserInventoryData*))(Il2CppBase() + 0x246ED0C))(this, value);
	}
	template <typename T = bool> T get_IsWorld() {
		return ((T (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ED14))(this);
	}
	template <typename T = void> T set_IsWorld(bool value) {
		return ((T (*)(UserLogoutFromArenaRequest*, bool))(Il2CppBase() + 0x246ED1C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserLogoutFromArenaRequest*, Il2CppObject*))(Il2CppBase() + 0x246ED28))(this, other);
	}
	template <typename T = bool> T Equals_1(UserLogoutFromArenaRequest* other) {
		return ((T (*)(UserLogoutFromArenaRequest*, UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246ED98))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246EE34))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246EEF8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserLogoutFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x246EF5C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246F064))(this);
	}
	template <typename T = void> T MergeFrom(UserLogoutFromArenaRequest* other) {
		return ((T (*)(UserLogoutFromArenaRequest*, UserLogoutFromArenaRequest*))(Il2CppBase() + 0x246F1AC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserLogoutFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x246F280))(this, input);
	}

};

}
