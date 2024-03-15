#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpSetBatteryRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpSetBatteryRequest"));
	}

	 static MessageParser1<ProtoModels::PvpSetBatteryRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::PvpSetBatteryRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1<ProtoModels::PvpSetBatteryRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PvpSetBatteryRequest*>* (*)(void *))(Il2CppBase() + 0x11C3CF4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11C3D58))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C3E78))(this);
	}
	template <typename R = ProtoModels::PvpSetBatteryRequest*> R Clone() {
		return ((R (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C3F18))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C3F74))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(PvpSetBatteryRequest*, int64_t))(Il2CppBase() + 0x11C3F7C))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C3F84))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(PvpSetBatteryRequest*, int64_t))(Il2CppBase() + 0x11C3F8C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PvpSetBatteryRequest*, Il2CppObject*))(Il2CppBase() + 0x11C3F94))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PvpSetBatteryRequest* other) {
		return ((R (*)(PvpSetBatteryRequest*, ProtoModels::PvpSetBatteryRequest*))(Il2CppBase() + 0x11C4030))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C4070))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C40DC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PvpSetBatteryRequest*, uintptr_t))(Il2CppBase() + 0x11C4140))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C41C4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PvpSetBatteryRequest* other) {
		return ((R (*)(PvpSetBatteryRequest*, ProtoModels::PvpSetBatteryRequest*))(Il2CppBase() + 0x11C4278))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PvpSetBatteryRequest*, uintptr_t))(Il2CppBase() + 0x11C4298))(this, input);
	}

};

}
