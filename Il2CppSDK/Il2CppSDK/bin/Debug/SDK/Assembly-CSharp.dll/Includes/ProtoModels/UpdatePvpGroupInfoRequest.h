#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdatePvpGroupInfoRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdatePvpGroupInfoRequest"));
	}

	 static MessageParser1ProtoModels::UpdatePvpGroupInfoRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::UpdatePvpGroupInfoRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& InfoFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PvpGroupInfo*> R& info_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::UpdatePvpGroupInfoRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::UpdatePvpGroupInfoRequest*>* (*)(void *))(Il2CppBase() + 0x1540140))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15401A4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x15402C4))(this);
	}
	template <typename R = ProtoModels::UpdatePvpGroupInfoRequest*> R Clone() {
		return ((R (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x154037C))(this);
	}
	template <typename R = ProtoModels::PvpGroupInfo*> R get_Info() {
		return ((R (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x15403D8))(this);
	}
	template <typename R = void> R set_Info(ProtoModels::PvpGroupInfo* value) {
		return ((R (*)(UpdatePvpGroupInfoRequest*, ProtoModels::PvpGroupInfo*))(Il2CppBase() + 0x15403E0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UpdatePvpGroupInfoRequest*, Il2CppObject*))(Il2CppBase() + 0x15403E8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UpdatePvpGroupInfoRequest* other) {
		return ((R (*)(UpdatePvpGroupInfoRequest*, ProtoModels::UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x154047C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x15404A8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x15404D8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UpdatePvpGroupInfoRequest*, uintptr_t))(Il2CppBase() + 0x154053C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x1540594))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UpdatePvpGroupInfoRequest* other) {
		return ((R (*)(UpdatePvpGroupInfoRequest*, ProtoModels::UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x1540610))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UpdatePvpGroupInfoRequest*, uintptr_t))(Il2CppBase() + 0x15406BC))(this, input);
	}

};

}
