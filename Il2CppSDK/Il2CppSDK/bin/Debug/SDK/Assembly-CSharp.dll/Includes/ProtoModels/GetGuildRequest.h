#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GetGuildRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GetGuildRequest"));
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
	template <typename T = int32_t> static T& ParamFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& param_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& SearchTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& searchType_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x176FB7C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x176FBE0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GetGuildRequest*))(Il2CppBase() + 0x176FD00))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GetGuildRequest*))(Il2CppBase() + 0x176FE08))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GetGuildRequest*))(Il2CppBase() + 0x176FE64))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GetGuildRequest*, int64_t))(Il2CppBase() + 0x176FE6C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Param() {
		return ((T (*)(GetGuildRequest*))(Il2CppBase() + 0x176FE74))(this);
	}
	template <typename T = void> T set_Param(Il2CppString* value) {
		return ((T (*)(GetGuildRequest*, Il2CppString*))(Il2CppBase() + 0x176FE7C))(this, value);
	}
	template <typename T = uintptr_t> T get_SearchType() {
		return ((T (*)(GetGuildRequest*))(Il2CppBase() + 0x176FEFC))(this);
	}
	template <typename T = void> T set_SearchType(uintptr_t value) {
		return ((T (*)(GetGuildRequest*, uintptr_t))(Il2CppBase() + 0x176FF04))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GetGuildRequest*))(Il2CppBase() + 0x176FF0C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GetGuildRequest*, int64_t))(Il2CppBase() + 0x176FF14))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GetGuildRequest*, uintptr_t))(Il2CppBase() + 0x176FF1C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GetGuildRequest*, uintptr_t))(Il2CppBase() + 0x176FF8C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GetGuildRequest*))(Il2CppBase() + 0x177000C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GetGuildRequest*))(Il2CppBase() + 0x17700BC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GetGuildRequest*, uintptr_t))(Il2CppBase() + 0x1770120))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GetGuildRequest*))(Il2CppBase() + 0x1770204))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GetGuildRequest*, uintptr_t))(Il2CppBase() + 0x1770344))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GetGuildRequest*, uintptr_t))(Il2CppBase() + 0x17703A8))(this, input);
	}

};

}
