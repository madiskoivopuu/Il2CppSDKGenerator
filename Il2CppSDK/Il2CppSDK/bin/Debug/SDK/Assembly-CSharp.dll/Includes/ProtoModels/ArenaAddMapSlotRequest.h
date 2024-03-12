#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAddMapSlotRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAddMapSlotRequest"));
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
	template <typename T = int32_t> static T& MapSlotFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mapSlot_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& EventTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& eventTag_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& TransactionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& transactionID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1384C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A138B0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A139D0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13AF8))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13B54))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaAddMapSlotRequest*, int64_t))(Il2CppBase() + 0x1A13B5C))(this, value);
	}
	template <typename T = uintptr_t> T get_MapSlot() {
		return ((T (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13B64))(this);
	}
	template <typename T = void> T set_MapSlot(uintptr_t value) {
		return ((T (*)(ArenaAddMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1A13B6C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EventTag() {
		return ((T (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13B74))(this);
	}
	template <typename T = void> T set_EventTag(Il2CppString* value) {
		return ((T (*)(ArenaAddMapSlotRequest*, Il2CppString*))(Il2CppBase() + 0x1A13B7C))(this, value);
	}
	template <typename T = int64_t> T get_TransactionID() {
		return ((T (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13BFC))(this);
	}
	template <typename T = void> T set_TransactionID(int64_t value) {
		return ((T (*)(ArenaAddMapSlotRequest*, int64_t))(Il2CppBase() + 0x1A13C04))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaAddMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1A13C0C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaAddMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1A13C7C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13D00))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13DA8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaAddMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1A13E0C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13EF0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaAddMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1A14030))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaAddMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1A14104))(this, input);
	}

};

}
