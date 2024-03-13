#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaDeleteMapSlotRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaDeleteMapSlotRequest"));
	}

	template <typename T = MessageParser1ArenaDeleteMapSlotRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& SlotIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& slotID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TransactionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& transactionID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaDeleteMapSlotRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1CC80))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1CCE4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CE04))(this);
	}
	template <typename T = ArenaDeleteMapSlotRequest*> T Clone() {
		return ((T (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CEAC))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CF08))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaDeleteMapSlotRequest*, int64_t))(Il2CppBase() + 0x1E1CF10))(this, value);
	}
	template <typename T = int64_t> T get_SlotID() {
		return ((T (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CF18))(this);
	}
	template <typename T = void> T set_SlotID(int64_t value) {
		return ((T (*)(ArenaDeleteMapSlotRequest*, int64_t))(Il2CppBase() + 0x1E1CF20))(this, value);
	}
	template <typename T = int64_t> T get_TransactionID() {
		return ((T (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CF28))(this);
	}
	template <typename T = void> T set_TransactionID(int64_t value) {
		return ((T (*)(ArenaDeleteMapSlotRequest*, int64_t))(Il2CppBase() + 0x1E1CF30))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaDeleteMapSlotRequest*, Il2CppObject*))(Il2CppBase() + 0x1E1CF38))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaDeleteMapSlotRequest* other) {
		return ((T (*)(ArenaDeleteMapSlotRequest*, ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1CFE4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1D034))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1D0BC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaDeleteMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1E1D120))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1D1D0))(this);
	}
	template <typename T = void> T MergeFrom(ArenaDeleteMapSlotRequest* other) {
		return ((T (*)(ArenaDeleteMapSlotRequest*, ArenaDeleteMapSlotRequest*))(Il2CppBase() + 0x1E1D2C8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaDeleteMapSlotRequest*, uintptr_t))(Il2CppBase() + 0x1E1D2F4))(this, input);
	}

};

}
