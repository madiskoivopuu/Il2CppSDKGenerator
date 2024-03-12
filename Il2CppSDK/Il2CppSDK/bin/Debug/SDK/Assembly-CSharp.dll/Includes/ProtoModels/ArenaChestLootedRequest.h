#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaChestLootedRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaChestLootedRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& tag_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& WeightFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& weight_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1B050))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1B0B4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B1D4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B2DC))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B338))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaChestLootedRequest*, int64_t))(Il2CppBase() + 0x1A1B340))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B348))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaChestLootedRequest*, int64_t))(Il2CppBase() + 0x1A1B350))(this, value);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B358))(this);
	}
	template <typename T = void> T set_Tag(Il2CppString* value) {
		return ((T (*)(ArenaChestLootedRequest*, Il2CppString*))(Il2CppBase() + 0x1A1B360))(this, value);
	}
	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B3E0))(this);
	}
	template <typename T = void> T set_Weight(int32_t value) {
		return ((T (*)(ArenaChestLootedRequest*, int32_t))(Il2CppBase() + 0x1A1B3E8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaChestLootedRequest*, uintptr_t))(Il2CppBase() + 0x1A1B3F0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaChestLootedRequest*, uintptr_t))(Il2CppBase() + 0x1A1B460))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B4E0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B590))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaChestLootedRequest*, uintptr_t))(Il2CppBase() + 0x1A1B5F4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B6D8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaChestLootedRequest*, uintptr_t))(Il2CppBase() + 0x1A1B818))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaChestLootedRequest*, uintptr_t))(Il2CppBase() + 0x1A1B87C))(this, input);
	}

};

}
