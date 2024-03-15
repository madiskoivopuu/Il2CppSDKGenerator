#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaDeleteMapSlotRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaDeleteMapSlotRequest"));
	}

	 static MessageParser1ProtoModels::ArenaDeleteMapSlotRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaDeleteMapSlotRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& SlotIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& slotID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TransactionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& transactionID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaDeleteMapSlotRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaDeleteMapSlotRequest*>* (*)(void *))(Il2CppBase() + 0x1E1CC80))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E1CCE4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CE04))(this);
	}
	template <typename R = ProtoModels::ArenaDeleteMapSlotRequest*> R Clone() {
		return ((R (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CEAC))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CF08))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaDeleteMapSlotRequest*, int64_t))(Il2CppBase() + 0x1E1CF10))(this, value);
	}
	template <typename R = int64_t> R get_SlotID() {
		return ((R (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CF18))(this);
	}
	template <typename R = void> R set_SlotID(int64_t value) {
		return ((R (*)(ArenaDeleteMapSlotRequest*, int64_t))(Il2CppBase() + 0x1E1CF20))(this, value);
	}
	template <typename R = int64_t> R get_TransactionID() {
		return ((R (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CF28))(this);
	}
	template <typename R = void> R set_TransactionID(int64_t value) {
		return ((R (*)(ArenaDeleteMapSlotRequest*, int64_t))(Il2CppBase() + 0x1E1CF30))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaDeleteMapSlotRequest*, Il2CppObject*))(Il2CppBase() + 0x1E1CF38))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaDeleteMapSlotRequest* other) {
		return ((R (*)(ArenaDeleteMapSlotRequest*, ProtoModels::ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CFE4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1D034))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1D0BC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaDeleteMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1E1D120))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1D1D0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaDeleteMapSlotRequest* other) {
		return ((R (*)(ArenaDeleteMapSlotRequest*, ProtoModels::ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1D2C8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaDeleteMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1E1D2F4))(this, input);
	}

};

}
