#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SendBonusFromCyclicAccountRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SendBonusFromCyclicAccountRequest"));
	}

	 static MessageParser1<ProtoModels::SendBonusFromCyclicAccountRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::SendBonusFromCyclicAccountRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& ItemFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& item_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::SendBonusFromCyclicAccountRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::SendBonusFromCyclicAccountRequest*>* (*)(void *))(Il2CppBase() + 0x136345C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x13634C0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x13635E0))(this);
	}
	template <typename R = ProtoModels::SendBonusFromCyclicAccountRequest*> R Clone() {
		return ((R (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x13636E8))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x1363744))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(SendBonusFromCyclicAccountRequest*, int64_t))(Il2CppBase() + 0x136374C))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x1363754))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(SendBonusFromCyclicAccountRequest*, int64_t))(Il2CppBase() + 0x136375C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Item() {
		return ((R (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x1363764))(this);
	}
	template <typename R = void> R set_Item(Il2CppString* value) {
		return ((R (*)(SendBonusFromCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0x136376C))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x13637EC))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(SendBonusFromCyclicAccountRequest*, int32_t))(Il2CppBase() + 0x13637F4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(SendBonusFromCyclicAccountRequest*, Il2CppObject*))(Il2CppBase() + 0x13637FC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::SendBonusFromCyclicAccountRequest* other) {
		return ((R (*)(SendBonusFromCyclicAccountRequest*, ProtoModels::SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x136386C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x13638EC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x136399C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(SendBonusFromCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0x1363A00))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x1363AE4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::SendBonusFromCyclicAccountRequest* other) {
		return ((R (*)(SendBonusFromCyclicAccountRequest*, ProtoModels::SendBonusFromCyclicAccountRequest*))(Il2CppBase() + 0x1363C24))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(SendBonusFromCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0x1363C88))(this, input);
	}

};

}
