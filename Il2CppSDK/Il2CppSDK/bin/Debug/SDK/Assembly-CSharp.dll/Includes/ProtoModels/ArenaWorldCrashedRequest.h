#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaWorldCrashedRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaWorldCrashedRequest"));
	}

	 static MessageParser1ProtoModels::ArenaWorldCrashedRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaWorldCrashedRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaWorldCrashedRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaWorldCrashedRequest*>* (*)(void *))(Il2CppBase() + 0x2868DB4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2868E18))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2868F38))(this);
	}
	template <typename R = ProtoModels::ArenaWorldCrashedRequest*> R Clone() {
		return ((R (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2868FD8))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2869034))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaWorldCrashedRequest*, int64_t))(Il2CppBase() + 0x286903C))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2869044))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaWorldCrashedRequest*, int64_t))(Il2CppBase() + 0x286904C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaWorldCrashedRequest*, Il2CppObject*))(Il2CppBase() + 0x2869054))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaWorldCrashedRequest* other) {
		return ((R (*)(ArenaWorldCrashedRequest*, ProtoModels::ArenaWorldCrashedRequest*))(Il2CppBase() + 0x28690F0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2869130))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x286919C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaWorldCrashedRequest*, uintptr_t))(Il2CppBase() + 0x2869200))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2869284))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaWorldCrashedRequest* other) {
		return ((R (*)(ArenaWorldCrashedRequest*, ProtoModels::ArenaWorldCrashedRequest*))(Il2CppBase() + 0x2869338))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaWorldCrashedRequest*, uintptr_t))(Il2CppBase() + 0x2869358))(this, input);
	}

};

}
