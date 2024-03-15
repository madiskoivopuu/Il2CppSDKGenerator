#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CoordinatorPortalPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CoordinatorPortalPlayer"));
	}

	 static MessageParser1<ProtoModels::CoordinatorPortalPlayer*>*& _parser() {
		return *(MessageParser1<ProtoModels::CoordinatorPortalPlayer*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::CoordinatorPortalPlayer*>* get_Parser() {
		return ((MessageParser1<ProtoModels::CoordinatorPortalPlayer*>* (*)(void *))(Il2CppBase() + 0x133C220))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x133C284))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C3A4))(this);
	}
	template <typename R = ProtoModels::CoordinatorPortalPlayer*> R Clone() {
		return ((R (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C43C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C4A8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(CoordinatorPortalPlayer*, int64_t))(Il2CppBase() + 0x133C4B0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CoordinatorPortalPlayer*, Il2CppObject*))(Il2CppBase() + 0x133C4B8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CoordinatorPortalPlayer* other) {
		return ((R (*)(CoordinatorPortalPlayer*, ProtoModels::CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C544))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C574))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C5B4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CoordinatorPortalPlayer*, uintptr_t))(Il2CppBase() + 0x133C618))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C670))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CoordinatorPortalPlayer* other) {
		return ((R (*)(CoordinatorPortalPlayer*, ProtoModels::CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C6EC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CoordinatorPortalPlayer*, uintptr_t))(Il2CppBase() + 0x133C700))(this, input);
	}

};

}
