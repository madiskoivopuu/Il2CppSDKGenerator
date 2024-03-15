#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRatingsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRatingsRequest"));
	}

	 static MessageParser1ProtoModels::ArenaRatingsRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaRatingsRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::ArenaRatingsRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaRatingsRequest*>* (*)(void *))(Il2CppBase() + 0x1A69C38))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A69C9C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A69DBC))(this);
	}
	template <typename R = ProtoModels::ArenaRatingsRequest*> R Clone() {
		return ((R (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A69E54))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A69EC0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaRatingsRequest*, int64_t))(Il2CppBase() + 0x1A69EC8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaRatingsRequest*, Il2CppObject*))(Il2CppBase() + 0x1A69ED0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaRatingsRequest* other) {
		return ((R (*)(ArenaRatingsRequest*, ProtoModels::ArenaRatingsRequest*))(Il2CppBase() + 0x1A69F5C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A69F8C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A69FCC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaRatingsRequest*, uintptr_t))(Il2CppBase() + 0x1A6A030))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaRatingsRequest*))(Il2CppBase() + 0x1A6A088))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaRatingsRequest* other) {
		return ((R (*)(ArenaRatingsRequest*, ProtoModels::ArenaRatingsRequest*))(Il2CppBase() + 0x1A6A104))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaRatingsRequest*, uintptr_t))(Il2CppBase() + 0x1A6A118))(this, input);
	}

};

}
