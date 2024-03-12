#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStatueStartEventRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStatueStartEventRequest"));
	}

	template <typename T = void*> static T& _parser() {
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

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x27133F8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x271345C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x271357C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x271361C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x2713678))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaStatueStartEventRequest*, int64_t))(Il2CppBase() + 0x2713680))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x2713688))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaStatueStartEventRequest*, int64_t))(Il2CppBase() + 0x2713690))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaStatueStartEventRequest*, uintptr_t))(Il2CppBase() + 0x2713698))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaStatueStartEventRequest*, uintptr_t))(Il2CppBase() + 0x2713734))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x2713774))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x27137E0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStatueStartEventRequest*, uintptr_t))(Il2CppBase() + 0x2713844))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x27138C8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaStatueStartEventRequest*, uintptr_t))(Il2CppBase() + 0x271397C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStatueStartEventRequest*, uintptr_t))(Il2CppBase() + 0x271399C))(this, input);
	}

};

}
