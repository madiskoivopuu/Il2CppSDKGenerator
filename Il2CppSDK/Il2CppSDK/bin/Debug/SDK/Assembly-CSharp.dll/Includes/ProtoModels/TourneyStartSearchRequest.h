#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class TourneyStartSearchRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "TourneyStartSearchRequest"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = int32_t> static T& TourneyNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& tourneyName_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x150CF58))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x150CFBC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(TourneyStartSearchRequest*))(Il2CppBase() + 0x150D0DC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(TourneyStartSearchRequest*))(Il2CppBase() + 0x150D1D8))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(TourneyStartSearchRequest*))(Il2CppBase() + 0x150D234))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(TourneyStartSearchRequest*, int64_t))(Il2CppBase() + 0x150D23C))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(TourneyStartSearchRequest*))(Il2CppBase() + 0x150D244))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(TourneyStartSearchRequest*, int64_t))(Il2CppBase() + 0x150D24C))(this, value);
	}
	template <typename T = Il2CppString*> T get_TourneyName() {
		return ((T (*)(TourneyStartSearchRequest*))(Il2CppBase() + 0x150D254))(this);
	}
	template <typename T = void> T set_TourneyName(Il2CppString* value) {
		return ((T (*)(TourneyStartSearchRequest*, Il2CppString*))(Il2CppBase() + 0x150D25C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(TourneyStartSearchRequest*, uintptr_t))(Il2CppBase() + 0x150D2DC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(TourneyStartSearchRequest*, uintptr_t))(Il2CppBase() + 0x150D34C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TourneyStartSearchRequest*))(Il2CppBase() + 0x150D3B0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TourneyStartSearchRequest*))(Il2CppBase() + 0x150D440))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(TourneyStartSearchRequest*, uintptr_t))(Il2CppBase() + 0x150D4A4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(TourneyStartSearchRequest*))(Il2CppBase() + 0x150D55C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(TourneyStartSearchRequest*, uintptr_t))(Il2CppBase() + 0x150D660))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(TourneyStartSearchRequest*, uintptr_t))(Il2CppBase() + 0x150D6A0))(this, input);
	}

};

}
