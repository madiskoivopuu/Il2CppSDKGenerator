#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAddMapSlotRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAddMapSlotRequest"));
	}

	 static MessageParser1ProtoModels::ArenaAddMapSlotRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaAddMapSlotRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MapSlotFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::NewGlobalMapType*> R& mapSlot_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& EventTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& eventTag_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& TransactionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& transactionID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaAddMapSlotRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaAddMapSlotRequest*>* (*)(void *))(Il2CppBase() + 0x1A1384C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A138B0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A139D0))(this);
	}
	template <typename R = ProtoModels::ArenaAddMapSlotRequest*> R Clone() {
		return ((R (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13AF8))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13B54))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaAddMapSlotRequest*, int64_t))(Il2CppBase() + 0x1A13B5C))(this, value);
	}
	template <typename R = ProtoModels::NewGlobalMapType*> R get_MapSlot() {
		return ((R (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13B64))(this);
	}
	template <typename R = void> R set_MapSlot(ProtoModels::NewGlobalMapType* value) {
		return ((R (*)(ArenaAddMapSlotRequest*, ProtoModels::NewGlobalMapType*))(Il2CppBase() + 0x1A13B6C))(this, value);
	}
	template <typename R = Il2CppString*> R get_EventTag() {
		return ((R (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13B74))(this);
	}
	template <typename R = void> R set_EventTag(Il2CppString* value) {
		return ((R (*)(ArenaAddMapSlotRequest*, Il2CppString*))(Il2CppBase() + 0x1A13B7C))(this, value);
	}
	template <typename R = int64_t> R get_TransactionID() {
		return ((R (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13BFC))(this);
	}
	template <typename R = void> R set_TransactionID(int64_t value) {
		return ((R (*)(ArenaAddMapSlotRequest*, int64_t))(Il2CppBase() + 0x1A13C04))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaAddMapSlotRequest*, Il2CppObject*))(Il2CppBase() + 0x1A13C0C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaAddMapSlotRequest* other) {
		return ((R (*)(ArenaAddMapSlotRequest*, ProtoModels::ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13C7C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13D00))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13DA8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaAddMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1A13E0C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A13EF0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaAddMapSlotRequest* other) {
		return ((R (*)(ArenaAddMapSlotRequest*, ProtoModels::ArenaAddMapSlotRequest*))(Il2CppBase() + 0x1A14030))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaAddMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1A14104))(this, input);
	}

};

}
