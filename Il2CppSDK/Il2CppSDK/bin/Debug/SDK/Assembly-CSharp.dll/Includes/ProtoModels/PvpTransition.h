#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpTransition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpTransition"));
	}

	 static MessageParser1ProtoModels::PvpTransition*>*& _parser() {
		return *(MessageParser1ProtoModels::PvpTransition*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& FromStateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PvPState*> R& fromState_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CurrentstateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PvPState*> R& currentstate_() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	 static MessageParser1ProtoModels::PvpTransition*>* get_Parser() {
		return ((MessageParser1ProtoModels::PvpTransition*>* (*)(void *))(Il2CppBase() + 0x11C54BC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11C5520))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PvpTransition*))(Il2CppBase() + 0x11C5640))(this);
	}
	template <typename R = ProtoModels::PvpTransition*> R Clone() {
		return ((R (*)(PvpTransition*))(Il2CppBase() + 0x11BFA1C))(this);
	}
	template <typename R = ProtoModels::PvPState*> R get_FromState() {
		return ((R (*)(PvpTransition*))(Il2CppBase() + 0x11C56D8))(this);
	}
	template <typename R = void> R set_FromState(ProtoModels::PvPState* value) {
		return ((R (*)(PvpTransition*, ProtoModels::PvPState*))(Il2CppBase() + 0x11C56E0))(this, value);
	}
	template <typename R = ProtoModels::PvPState*> R get_Currentstate() {
		return ((R (*)(PvpTransition*))(Il2CppBase() + 0x11C56E8))(this);
	}
	template <typename R = void> R set_Currentstate(ProtoModels::PvPState* value) {
		return ((R (*)(PvpTransition*, ProtoModels::PvPState*))(Il2CppBase() + 0x11C56F0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PvpTransition*, Il2CppObject*))(Il2CppBase() + 0x11C56F8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PvpTransition* other) {
		return ((R (*)(PvpTransition*, ProtoModels::PvpTransition*))(Il2CppBase() + 0x11C5794))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PvpTransition*))(Il2CppBase() + 0x11C57D4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PvpTransition*))(Il2CppBase() + 0x11C5840))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PvpTransition*, uintptr_t))(Il2CppBase() + 0x11C58A4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PvpTransition*))(Il2CppBase() + 0x11C5928))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PvpTransition* other) {
		return ((R (*)(PvpTransition*, ProtoModels::PvpTransition*))(Il2CppBase() + 0x11C0348))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PvpTransition*, uintptr_t))(Il2CppBase() + 0x11C59DC))(this, input);
	}

};

}
