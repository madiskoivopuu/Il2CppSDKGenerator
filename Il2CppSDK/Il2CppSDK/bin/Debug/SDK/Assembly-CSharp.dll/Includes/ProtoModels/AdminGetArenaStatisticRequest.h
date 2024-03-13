#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetArenaStatisticRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetArenaStatisticRequest"));
	}

	template <typename T = MessageParser1AdminGetArenaStatisticRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1AdminGetArenaStatisticRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B1B48))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B1BAC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1CCC))(this);
	}
	template <typename T = AdminGetArenaStatisticRequest*> T Clone() {
		return ((T (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1D64))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1DD0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminGetArenaStatisticRequest*, int64_t))(Il2CppBase() + 0x18B1DD8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminGetArenaStatisticRequest*, Il2CppObject*))(Il2CppBase() + 0x18B1DE0))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminGetArenaStatisticRequest* other) {
		return ((T (*)(AdminGetArenaStatisticRequest*, AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1E6C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1E9C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1EDC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetArenaStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B1F40))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1F98))(this);
	}
	template <typename T = void> T MergeFrom(AdminGetArenaStatisticRequest* other) {
		return ((T (*)(AdminGetArenaStatisticRequest*, AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B2014))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetArenaStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B2028))(this, input);
	}

};

}
