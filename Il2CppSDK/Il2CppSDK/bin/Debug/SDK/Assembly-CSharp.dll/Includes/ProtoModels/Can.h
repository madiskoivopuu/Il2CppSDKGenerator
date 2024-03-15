#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Can
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Can"));
	}

	 static MessageParser1<ProtoModels::Can*>*& _parser() {
		return *(MessageParser1<ProtoModels::Can*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MembersStartRaidFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& membersStartRaid_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::Can*>* get_Parser() {
		return ((MessageParser1<ProtoModels::Can*>* (*)(void *))(Il2CppBase() + 0x15B5694))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15B56F8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Can*))(Il2CppBase() + 0x15B5818))(this);
	}
	template <typename R = ProtoModels::Can*> R Clone() {
		return ((R (*)(Can*))(Il2CppBase() + 0x15B58B0))(this);
	}
	template <typename R = bool> R get_MembersStartRaid() {
		return ((R (*)(Can*))(Il2CppBase() + 0x15B591C))(this);
	}
	template <typename R = void> R set_MembersStartRaid(bool value) {
		return ((R (*)(Can*, bool))(Il2CppBase() + 0x15B5924))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Can*, Il2CppObject*))(Il2CppBase() + 0x15B5930))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Can* other) {
		return ((R (*)(Can*, ProtoModels::Can*))(Il2CppBase() + 0x15B59C8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Can*))(Il2CppBase() + 0x15B5A04))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Can*))(Il2CppBase() + 0x15B5A40))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Can*, uintptr_t))(Il2CppBase() + 0x15B5AA4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Can*))(Il2CppBase() + 0x15B5AFC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Can* other) {
		return ((R (*)(Can*, ProtoModels::Can*))(Il2CppBase() + 0x15B5B10))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Can*, uintptr_t))(Il2CppBase() + 0x15B5B24))(this, input);
	}

};

}
