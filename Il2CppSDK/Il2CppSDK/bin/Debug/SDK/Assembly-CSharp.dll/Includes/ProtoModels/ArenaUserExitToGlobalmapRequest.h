#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserExitToGlobalmapRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserExitToGlobalmapRequest"));
	}

	template <typename T = MessageParser1ArenaUserExitToGlobalmapRequest*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& InventoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaUserInventoryData*> T& inventory_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1ArenaUserExitToGlobalmapRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x285AEFC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x285AF60))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B080))(this);
	}
	template <typename T = ArenaUserExitToGlobalmapRequest*> T Clone() {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B1A8))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B204))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*, int64_t))(Il2CppBase() + 0x285B20C))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B214))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*, int64_t))(Il2CppBase() + 0x285B21C))(this, value);
	}
	template <typename T = ArenaUserInventoryData*> T get_Inventory() {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B224))(this);
	}
	template <typename T = void> T set_Inventory(ArenaUserInventoryData* value) {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*, ArenaUserInventoryData*))(Il2CppBase() + 0x285B22C))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B234))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*, int64_t))(Il2CppBase() + 0x285B23C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*, Il2CppObject*))(Il2CppBase() + 0x285B244))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserExitToGlobalmapRequest* other) {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*, ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B2B4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B334))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B3D4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*, uintptr_t))(Il2CppBase() + 0x285B438))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B514))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserExitToGlobalmapRequest* other) {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*, ArenaUserExitToGlobalmapRequest*))(Il2CppBase() + 0x285B648))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserExitToGlobalmapRequest*, uintptr_t))(Il2CppBase() + 0x285BB5C))(this, input);
	}

};

}
