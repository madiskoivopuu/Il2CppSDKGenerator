#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CompassEventRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CompassEventRequest"));
	}

	 static MessageParser1ProtoModels::CompassEventRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::CompassEventRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& EventNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& eventName_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ItemNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& itemName_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::CompassEventRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::CompassEventRequest*>* (*)(void *))(Il2CppBase() + 0xE2BAE8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xE2BB4C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CompassEventRequest*))(Il2CppBase() + 0xE2BC6C))(this);
	}
	template <typename R = ProtoModels::CompassEventRequest*> R Clone() {
		return ((R (*)(CompassEventRequest*))(Il2CppBase() + 0xE2BD8C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(CompassEventRequest*))(Il2CppBase() + 0xE2BDE8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(CompassEventRequest*, int64_t))(Il2CppBase() + 0xE2BDF0))(this, value);
	}
	template <typename R = Il2CppString*> R get_EventName() {
		return ((R (*)(CompassEventRequest*))(Il2CppBase() + 0xE2BDF8))(this);
	}
	template <typename R = void> R set_EventName(Il2CppString* value) {
		return ((R (*)(CompassEventRequest*, Il2CppString*))(Il2CppBase() + 0xE2BE00))(this, value);
	}
	template <typename R = Il2CppString*> R get_ItemName() {
		return ((R (*)(CompassEventRequest*))(Il2CppBase() + 0xE2BE80))(this);
	}
	template <typename R = void> R set_ItemName(Il2CppString* value) {
		return ((R (*)(CompassEventRequest*, Il2CppString*))(Il2CppBase() + 0xE2BE88))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(CompassEventRequest*))(Il2CppBase() + 0xE2BF08))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(CompassEventRequest*, int64_t))(Il2CppBase() + 0xE2BF10))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CompassEventRequest*, Il2CppObject*))(Il2CppBase() + 0xE2BF18))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CompassEventRequest* other) {
		return ((R (*)(CompassEventRequest*, ProtoModels::CompassEventRequest*))(Il2CppBase() + 0xE2BF88))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CompassEventRequest*))(Il2CppBase() + 0xE2C00C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CompassEventRequest*))(Il2CppBase() + 0xE2C0BC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CompassEventRequest*, uintptr_t))(Il2CppBase() + 0xE2C120))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CompassEventRequest*))(Il2CppBase() + 0xE2C20C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CompassEventRequest* other) {
		return ((R (*)(CompassEventRequest*, ProtoModels::CompassEventRequest*))(Il2CppBase() + 0xE2C354))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CompassEventRequest*, uintptr_t))(Il2CppBase() + 0xE2C3C4))(this, input);
	}

};

}
