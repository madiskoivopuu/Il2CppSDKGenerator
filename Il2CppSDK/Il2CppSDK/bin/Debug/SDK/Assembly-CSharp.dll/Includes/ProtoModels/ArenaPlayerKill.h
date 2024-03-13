#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPlayerKill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPlayerKill"));
	}

	template <typename T = MessageParser1ArenaPlayerKill*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ItemsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CodecIl2CppString*, int32_t>*> static T& _map_items_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = MapField2Il2CppString*, int32_t>*> T& items_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = KillInventoryType*> T& type_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& BrokenItemsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CodecIl2CppString*, int32_t>*> static T& _map_brokenItems_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = MapField2Il2CppString*, int32_t>*> T& brokenItems_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = MessageParser1ArenaPlayerKill*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2E1D8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2E23C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E35C))(this);
	}
	template <typename T = ArenaPlayerKill*> T Clone() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E524))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E580))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaPlayerKill*, int64_t))(Il2CppBase() + 0x1E2E588))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E590))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaPlayerKill*, int64_t))(Il2CppBase() + 0x1E2E598))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E5A0))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaPlayerKill*, int64_t))(Il2CppBase() + 0x1E2E5A8))(this, value);
	}
	template <typename T = MapField2Il2CppString*, int32_t>*> T get_Items() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E5B0))(this);
	}
	template <typename T = KillInventoryType*> T get_Type() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E5B8))(this);
	}
	template <typename T = void> T set_Type(KillInventoryType* value) {
		return ((T (*)(ArenaPlayerKill*, KillInventoryType*))(Il2CppBase() + 0x1E2E5C0))(this, value);
	}
	template <typename T = MapField2Il2CppString*, int32_t>*> T get_BrokenItems() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E5C8))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaPlayerKill*, Il2CppObject*))(Il2CppBase() + 0x1E2E5D0))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaPlayerKill* other) {
		return ((T (*)(ArenaPlayerKill*, ArenaPlayerKill*))(Il2CppBase() + 0x1E2E640))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E724))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E7FC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaPlayerKill*, uintptr_t))(Il2CppBase() + 0x1E2E860))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaPlayerKill*))(Il2CppBase() + 0x1E2E9F4))(this);
	}
	template <typename T = void> T MergeFrom(ArenaPlayerKill* other) {
		return ((T (*)(ArenaPlayerKill*, ArenaPlayerKill*))(Il2CppBase() + 0x1E2EBD8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaPlayerKill*, uintptr_t))(Il2CppBase() + 0x1E2EC94))(this, input);
	}

};

}
