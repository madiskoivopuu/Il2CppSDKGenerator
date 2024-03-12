#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaWorldCrashedRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaWorldCrashedRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2868DB4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2868E18))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2868F38))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2868FD8))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2869034))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaWorldCrashedRequest*, int64_t))(Il2CppBase() + 0x286903C))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2869044))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaWorldCrashedRequest*, int64_t))(Il2CppBase() + 0x286904C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaWorldCrashedRequest*, uintptr_t))(Il2CppBase() + 0x2869054))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaWorldCrashedRequest*, uintptr_t))(Il2CppBase() + 0x28690F0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2869130))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x286919C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaWorldCrashedRequest*, uintptr_t))(Il2CppBase() + 0x2869200))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2869284))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaWorldCrashedRequest*, uintptr_t))(Il2CppBase() + 0x2869338))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaWorldCrashedRequest*, uintptr_t))(Il2CppBase() + 0x2869358))(this, input);
	}

};

}
