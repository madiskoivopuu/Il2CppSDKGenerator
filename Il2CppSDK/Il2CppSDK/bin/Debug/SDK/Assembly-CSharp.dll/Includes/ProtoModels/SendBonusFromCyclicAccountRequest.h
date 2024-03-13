#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SendBonusFromCyclicAccountRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SendBonusFromCyclicAccountRequest"));
	}

	template <typename T = MessageParser1SendBonusFromCyclicAccountRequest*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& ItemFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& item_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1SendBonusFromCyclicAccountRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x136345C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x13634C0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x13635E0))(this);
	}
	template <typename T = SendBonusFromCyclicAccountRequest*> T Clone() {
		return ((T (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x13636E8))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x1363744))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(SendBonusFromCyclicAccountRequest*, int64_t))(Il2CppBase() + 0x136374C))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x1363754))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(SendBonusFromCyclicAccountRequest*, int64_t))(Il2CppBase() + 0x136375C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Item() {
		return ((T (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x1363764))(this);
	}
	template <typename T = void> T set_Item(Il2CppString* value) {
		return ((T (*)(SendBonusFromCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0x136376C))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x13637EC))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(SendBonusFromCyclicAccountRequest*, int32_t))(Il2CppBase() + 0x13637F4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(SendBonusFromCyclicAccountRequest*, Il2CppObject*))(Il2CppBase() + 0x13637FC))(this, other);
	}
	template <typename T = bool> T Equals_1(SendBonusFromCyclicAccountRequest* other) {
		return ((T (*)(SendBonusFromCyclicAccountRequest*, SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x136386C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x13638EC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x136399C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(SendBonusFromCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0x1363A00))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x1363AE4))(this);
	}
	template <typename T = void> T MergeFrom(SendBonusFromCyclicAccountRequest* other) {
		return ((T (*)(SendBonusFromCyclicAccountRequest*, SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x1363C24))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(SendBonusFromCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0x1363C88))(this, input);
	}

};

}
