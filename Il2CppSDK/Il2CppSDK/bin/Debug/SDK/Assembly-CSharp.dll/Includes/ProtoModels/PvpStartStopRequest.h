#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpStartStopRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpStartStopRequest"));
	}

	 static MessageParser1<ProtoModels::PvpStartStopRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::PvpStartStopRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1<ProtoModels::PvpStartStopRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PvpStartStopRequest*>* (*)(void *))(Il2CppBase() + 0x11C4438))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11C449C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C45BC))(this);
	}
	template <typename R = ProtoModels::PvpStartStopRequest*> R Clone() {
		return ((R (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C465C))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C46B8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(PvpStartStopRequest*, int64_t))(Il2CppBase() + 0x11C46C0))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C46C8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(PvpStartStopRequest*, int64_t))(Il2CppBase() + 0x11C46D0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PvpStartStopRequest*, Il2CppObject*))(Il2CppBase() + 0x11C46D8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PvpStartStopRequest* other) {
		return ((R (*)(PvpStartStopRequest*, ProtoModels::PvpStartStopRequest*))(Il2CppBase() + 0x11C4774))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C47B4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C4820))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PvpStartStopRequest*, uintptr_t))(Il2CppBase() + 0x11C4884))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C4908))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PvpStartStopRequest* other) {
		return ((R (*)(PvpStartStopRequest*, ProtoModels::PvpStartStopRequest*))(Il2CppBase() + 0x11C49BC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PvpStartStopRequest*, uintptr_t))(Il2CppBase() + 0x11C49DC))(this, input);
	}

};

}
