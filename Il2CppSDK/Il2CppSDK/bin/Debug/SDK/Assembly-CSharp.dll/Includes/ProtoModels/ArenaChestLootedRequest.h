#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaChestLootedRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaChestLootedRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaChestLootedRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaChestLootedRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& tag_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& WeightFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& weight_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ArenaChestLootedRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaChestLootedRequest*>* (*)(void *))(Il2CppBase() + 0x1A1B050))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A1B0B4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B1D4))(this);
	}
	template <typename R = ProtoModels::ArenaChestLootedRequest*> R Clone() {
		return ((R (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B2DC))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B338))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaChestLootedRequest*, int64_t))(Il2CppBase() + 0x1A1B340))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B348))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaChestLootedRequest*, int64_t))(Il2CppBase() + 0x1A1B350))(this, value);
	}
	template <typename R = Il2CppString*> R get_Tag() {
		return ((R (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B358))(this);
	}
	template <typename R = void> R set_Tag(Il2CppString* value) {
		return ((R (*)(ArenaChestLootedRequest*, Il2CppString*))(Il2CppBase() + 0x1A1B360))(this, value);
	}
	template <typename R = int32_t> R get_Weight() {
		return ((R (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B3E0))(this);
	}
	template <typename R = void> R set_Weight(int32_t value) {
		return ((R (*)(ArenaChestLootedRequest*, int32_t))(Il2CppBase() + 0x1A1B3E8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaChestLootedRequest*, Il2CppObject*))(Il2CppBase() + 0x1A1B3F0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaChestLootedRequest* other) {
		return ((R (*)(ArenaChestLootedRequest*, ProtoModels::ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B460))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B4E0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B590))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaChestLootedRequest*, uintptr_t))(Il2CppBase() + 0x1A1B5F4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B6D8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaChestLootedRequest* other) {
		return ((R (*)(ArenaChestLootedRequest*, ProtoModels::ArenaChestLootedRequest*))(Il2CppBase() + 0x1A1B818))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaChestLootedRequest*, uintptr_t))(Il2CppBase() + 0x1A1B87C))(this, input);
	}

};

}
