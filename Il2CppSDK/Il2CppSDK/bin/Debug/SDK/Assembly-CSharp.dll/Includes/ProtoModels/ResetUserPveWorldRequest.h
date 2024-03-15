#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ResetUserPveWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ResetUserPveWorldRequest"));
	}

	 static MessageParser1<ProtoModels::ResetUserPveWorldRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ResetUserPveWorldRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& PveIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pveID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MapSlotFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapSlot_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ResetUserPveWorldRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ResetUserPveWorldRequest*>* (*)(void *))(Il2CppBase() + 0x119AF1C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x119AF80))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B0A0))(this);
	}
	template <typename R = ProtoModels::ResetUserPveWorldRequest*> R Clone() {
		return ((R (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B150))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B1AC))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ResetUserPveWorldRequest*, int64_t))(Il2CppBase() + 0x119B1B4))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B1BC))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ResetUserPveWorldRequest*, int64_t))(Il2CppBase() + 0x119B1C4))(this, value);
	}
	template <typename R = int64_t> R get_PveID() {
		return ((R (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B1CC))(this);
	}
	template <typename R = void> R set_PveID(int64_t value) {
		return ((R (*)(ResetUserPveWorldRequest*, int64_t))(Il2CppBase() + 0x119B1D4))(this, value);
	}
	template <typename R = int64_t> R get_MapSlot() {
		return ((R (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B1DC))(this);
	}
	template <typename R = void> R set_MapSlot(int64_t value) {
		return ((R (*)(ResetUserPveWorldRequest*, int64_t))(Il2CppBase() + 0x119B1E4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ResetUserPveWorldRequest*, Il2CppObject*))(Il2CppBase() + 0x119B1EC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ResetUserPveWorldRequest* other) {
		return ((R (*)(ResetUserPveWorldRequest*, ProtoModels::ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B25C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B2BC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B360))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ResetUserPveWorldRequest*, uintptr_t))(Il2CppBase() + 0x119B3C4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B4A0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ResetUserPveWorldRequest* other) {
		return ((R (*)(ResetUserPveWorldRequest*, ProtoModels::ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B5D4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ResetUserPveWorldRequest*, uintptr_t))(Il2CppBase() + 0x119B60C))(this, input);
	}

};

}
