#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaDisbandClanRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaDisbandClanRequest"));
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

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1D4BC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1D520))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D640))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D6E0))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D73C))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaDisbandClanRequest*, int64_t))(Il2CppBase() + 0x1E1D744))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D74C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaDisbandClanRequest*, int64_t))(Il2CppBase() + 0x1E1D754))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaDisbandClanRequest*, uintptr_t))(Il2CppBase() + 0x1E1D75C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaDisbandClanRequest*, uintptr_t))(Il2CppBase() + 0x1E1D7F8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D838))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D8A4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaDisbandClanRequest*, uintptr_t))(Il2CppBase() + 0x1E1D908))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D98C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaDisbandClanRequest*, uintptr_t))(Il2CppBase() + 0x1E1DA40))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaDisbandClanRequest*, uintptr_t))(Il2CppBase() + 0x1E1DA60))(this, input);
	}

};

}
