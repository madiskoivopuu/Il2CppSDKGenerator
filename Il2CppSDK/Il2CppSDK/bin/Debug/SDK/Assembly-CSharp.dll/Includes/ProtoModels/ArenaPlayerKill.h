#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPlayerKill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPlayerKill"));
	}

	 static MessageParser1<ProtoModels::ArenaPlayerKill*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaPlayerKill*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ItemsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, int32_t>*& _map_items_codec() {
		return *(Codec<Il2CppString*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2<Il2CppString*, int32_t>*& items_() {
		return *(MapField2<Il2CppString*, int32_t>**)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::KillInventoryType> R& type_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& BrokenItemsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, int32_t>*& _map_brokenItems_codec() {
		return *(Codec<Il2CppString*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 MapField2<Il2CppString*, int32_t>*& brokenItems_() {
		return *(MapField2<Il2CppString*, int32_t>**)((uintptr_t)this + 0x38);
	}

	 static MessageParser1<ProtoModels::ArenaPlayerKill*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaPlayerKill*>* (*)(void *))(Il2CppBase() + 0x1E2E1D8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2E23C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E35C))(this);
	}
	template <typename R = ProtoModels::ArenaPlayerKill*> R Clone() {
		return ((R (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E524))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E580))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaPlayerKill*, int64_t))(Il2CppBase() + 0x1E2E588))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E590))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaPlayerKill*, int64_t))(Il2CppBase() + 0x1E2E598))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E5A0))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaPlayerKill*, int64_t))(Il2CppBase() + 0x1E2E5A8))(this, value);
	}
	 MapField2<Il2CppString*, int32_t>* get_Items() {
		return ((MapField2<Il2CppString*, int32_t>* (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E5B0))(this);
	}
	template <typename R = ProtoModels::KillInventoryType> R get_Type() {
		return ((R (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E5B8))(this);
	}
	template <typename R = void> R set_Type(ProtoModels::KillInventoryType value) {
		return ((R (*)(ArenaPlayerKill*, ProtoModels::KillInventoryType))(Il2CppBase() + 0x1E2E5C0))(this, value);
	}
	 MapField2<Il2CppString*, int32_t>* get_BrokenItems() {
		return ((MapField2<Il2CppString*, int32_t>* (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E5C8))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaPlayerKill*, Il2CppObject*))(Il2CppBase() + 0x1E2E5D0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaPlayerKill* other) {
		return ((R (*)(ArenaPlayerKill*, ProtoModels::ArenaPlayerKill*))(Il2CppBase() + 0x1E2E640))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E724))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E7FC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaPlayerKill*, uintptr_t))(Il2CppBase() + 0x1E2E860))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E9F4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaPlayerKill* other) {
		return ((R (*)(ArenaPlayerKill*, ProtoModels::ArenaPlayerKill*))(Il2CppBase() + 0x1E2EBD8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaPlayerKill*, uintptr_t))(Il2CppBase() + 0x1E2EC94))(this, input);
	}

};

}
