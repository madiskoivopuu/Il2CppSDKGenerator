#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaOpenCityRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaOpenCityRequest"));
	}

	template <typename T = MessageParser1ArenaOpenCityRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ArenaOpenCityRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2DA94))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2DAF8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaOpenCityRequest*))(Il2CppBase() + 0x1E2DC18))(this);
	}
	template <typename T = ArenaOpenCityRequest*> T Clone() {
		return ((T (*)(ArenaOpenCityRequest*))(Il2CppBase() + 0x1E2DCB8))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaOpenCityRequest*))(Il2CppBase() + 0x1E2DD14))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaOpenCityRequest*, int64_t))(Il2CppBase() + 0x1E2DD1C))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaOpenCityRequest*))(Il2CppBase() + 0x1E2DD24))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaOpenCityRequest*, int64_t))(Il2CppBase() + 0x1E2DD2C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaOpenCityRequest*, Il2CppObject*))(Il2CppBase() + 0x1E2DD34))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaOpenCityRequest* other) {
		return ((T (*)(ArenaOpenCityRequest*, ArenaOpenCityRequest*))(Il2CppBase() + 0x1E2DDD0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaOpenCityRequest*))(Il2CppBase() + 0x1E2DE10))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaOpenCityRequest*))(Il2CppBase() + 0x1E2DE7C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaOpenCityRequest*, uintptr_t))(Il2CppBase() + 0x1E2DEE0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaOpenCityRequest*))(Il2CppBase() + 0x1E2DF64))(this);
	}
	template <typename T = void> T MergeFrom(ArenaOpenCityRequest* other) {
		return ((T (*)(ArenaOpenCityRequest*, ArenaOpenCityRequest*))(Il2CppBase() + 0x1E2E018))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaOpenCityRequest*, uintptr_t))(Il2CppBase() + 0x1E2E038))(this, input);
	}

};

}
