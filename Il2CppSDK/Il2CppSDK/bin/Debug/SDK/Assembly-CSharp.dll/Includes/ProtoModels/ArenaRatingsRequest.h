#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRatingsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRatingsRequest"));
	}

	template <typename T = MessageParser1ArenaRatingsRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1ArenaRatingsRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A69C38))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A69C9C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A69DBC))(this);
	}
	template <typename T = ArenaRatingsRequest*> T Clone() {
		return ((T (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A69E54))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A69EC0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaRatingsRequest*, int64_t))(Il2CppBase() + 0x1A69EC8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaRatingsRequest*, Il2CppObject*))(Il2CppBase() + 0x1A69ED0))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaRatingsRequest* other) {
		return ((T (*)(ArenaRatingsRequest*, ArenaRatingsRequest*))(Il2CppBase() + 0x1A69F5C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A69F8C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A69FCC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaRatingsRequest*, uintptr_t))(Il2CppBase() + 0x1A6A030))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A6A088))(this);
	}
	template <typename T = void> T MergeFrom(ArenaRatingsRequest* other) {
		return ((T (*)(ArenaRatingsRequest*, ArenaRatingsRequest*))(Il2CppBase() + 0x1A6A104))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaRatingsRequest*, uintptr_t))(Il2CppBase() + 0x1A6A118))(this, input);
	}

};

}
