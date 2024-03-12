#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ResetUserPveWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ResetUserPveWorldRequest"));
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
	template <typename T = int32_t> static T& PveIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pveID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MapSlotFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapSlot_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x119AF1C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x119AF80))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B0A0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B150))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B1AC))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ResetUserPveWorldRequest*, int64_t))(Il2CppBase() + 0x119B1B4))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B1BC))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ResetUserPveWorldRequest*, int64_t))(Il2CppBase() + 0x119B1C4))(this, value);
	}
	template <typename T = int64_t> T get_PveID() {
		return ((T (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B1CC))(this);
	}
	template <typename T = void> T set_PveID(int64_t value) {
		return ((T (*)(ResetUserPveWorldRequest*, int64_t))(Il2CppBase() + 0x119B1D4))(this, value);
	}
	template <typename T = int64_t> T get_MapSlot() {
		return ((T (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B1DC))(this);
	}
	template <typename T = void> T set_MapSlot(int64_t value) {
		return ((T (*)(ResetUserPveWorldRequest*, int64_t))(Il2CppBase() + 0x119B1E4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ResetUserPveWorldRequest*, uintptr_t))(Il2CppBase() + 0x119B1EC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ResetUserPveWorldRequest*, uintptr_t))(Il2CppBase() + 0x119B25C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B2BC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B360))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ResetUserPveWorldRequest*, uintptr_t))(Il2CppBase() + 0x119B3C4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ResetUserPveWorldRequest*))(Il2CppBase() + 0x119B4A0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ResetUserPveWorldRequest*, uintptr_t))(Il2CppBase() + 0x119B5D4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ResetUserPveWorldRequest*, uintptr_t))(Il2CppBase() + 0x119B60C))(this, input);
	}

};

}
