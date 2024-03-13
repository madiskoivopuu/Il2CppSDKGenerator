#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpStartStopRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpStartStopRequest"));
	}

	template <typename T = MessageParser1PvpStartStopRequest*>*> static T& _parser() {
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

	template <typename T = MessageParser1PvpStartStopRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C4438))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C449C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C45BC))(this);
	}
	template <typename T = PvpStartStopRequest*> T Clone() {
		return ((T (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C465C))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C46B8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(PvpStartStopRequest*, int64_t))(Il2CppBase() + 0x11C46C0))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C46C8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(PvpStartStopRequest*, int64_t))(Il2CppBase() + 0x11C46D0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(PvpStartStopRequest*, Il2CppObject*))(Il2CppBase() + 0x11C46D8))(this, other);
	}
	template <typename T = bool> T Equals_1(PvpStartStopRequest* other) {
		return ((T (*)(PvpStartStopRequest*, PvpStartStopRequest*))(Il2CppBase() + 0x11C4774))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C47B4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C4820))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PvpStartStopRequest*, uintptr_t))(Il2CppBase() + 0x11C4884))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PvpStartStopRequest*))(Il2CppBase() + 0x11C4908))(this);
	}
	template <typename T = void> T MergeFrom(PvpStartStopRequest* other) {
		return ((T (*)(PvpStartStopRequest*, PvpStartStopRequest*))(Il2CppBase() + 0x11C49BC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PvpStartStopRequest*, uintptr_t))(Il2CppBase() + 0x11C49DC))(this, input);
	}

};

}
