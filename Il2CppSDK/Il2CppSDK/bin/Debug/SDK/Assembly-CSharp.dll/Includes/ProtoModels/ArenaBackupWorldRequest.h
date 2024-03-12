#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBackupWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBackupWorldRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& WorldsIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldsID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& WorldJsonFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_worldJson_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& worldJson_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& UserInventoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_userInventory_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& userInventory_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A164F0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A16554))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A16674))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A1685C))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A168B8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaBackupWorldRequest*, int64_t))(Il2CppBase() + 0x1A168C0))(this, value);
	}
	template <typename T = int64_t> T get_WorldsID() {
		return ((T (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A168C8))(this);
	}
	template <typename T = void> T set_WorldsID(int64_t value) {
		return ((T (*)(ArenaBackupWorldRequest*, int64_t))(Il2CppBase() + 0x1A168D0))(this, value);
	}
	template <typename T = void*> T get_WorldJson() {
		return ((T (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A168D8))(this);
	}
	template <typename T = void*> T get_UserInventory() {
		return ((T (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A168E0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaBackupWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A168E8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaBackupWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A16958))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A16A30))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A16AD0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaBackupWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A16B34))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A16C60))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaBackupWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A16DC0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaBackupWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A16E78))(this, input);
	}

};

}
