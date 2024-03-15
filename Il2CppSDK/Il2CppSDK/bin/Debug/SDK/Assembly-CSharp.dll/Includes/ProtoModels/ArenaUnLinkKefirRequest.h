#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUnLinkKefirRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUnLinkKefirRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaUnLinkKefirRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUnLinkKefirRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaUnLinkKefirRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUnLinkKefirRequest*>* (*)(void *))(Il2CppBase() + 0xF4681C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF46880))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF469A0))(this);
	}
	template <typename R = ProtoModels::ArenaUnLinkKefirRequest*> R Clone() {
		return ((R (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46A40))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46A9C))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUnLinkKefirRequest*, int64_t))(Il2CppBase() + 0xF46AA4))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46AAC))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUnLinkKefirRequest*, int64_t))(Il2CppBase() + 0xF46AB4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUnLinkKefirRequest*, Il2CppObject*))(Il2CppBase() + 0xF46ABC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUnLinkKefirRequest* other) {
		return ((R (*)(ArenaUnLinkKefirRequest*, ProtoModels::ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46B58))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46B98))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46C04))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUnLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0xF46C68))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46CEC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUnLinkKefirRequest* other) {
		return ((R (*)(ArenaUnLinkKefirRequest*, ProtoModels::ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46DA0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUnLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0xF46DC0))(this, input);
	}

};

}
