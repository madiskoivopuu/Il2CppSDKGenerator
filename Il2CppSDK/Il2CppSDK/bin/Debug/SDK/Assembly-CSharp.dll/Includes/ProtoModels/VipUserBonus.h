#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class VipUserBonus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "VipUserBonus"));
	}

	 static MessageParser1ProtoModels::VipUserBonus*>*& _parser() {
		return *(MessageParser1ProtoModels::VipUserBonus*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& type_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& IntValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& intValue_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> static R& StringValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& stringValue_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::VipUserBonus*>* get_Parser() {
		return ((MessageParser1ProtoModels::VipUserBonus*>* (*)(void *))(Il2CppBase() + 0x15D0008))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15D006C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(VipUserBonus*))(Il2CppBase() + 0x15D018C))(this);
	}
	template <typename R = ProtoModels::VipUserBonus*> R Clone() {
		return ((R (*)(VipUserBonus*))(Il2CppBase() + 0x15D0290))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(VipUserBonus*))(Il2CppBase() + 0x15D02EC))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(VipUserBonus*, int64_t))(Il2CppBase() + 0x15D02F4))(this, value);
	}
	template <typename R = int32_t> R get_Type() {
		return ((R (*)(VipUserBonus*))(Il2CppBase() + 0x15D02FC))(this);
	}
	template <typename R = void> R set_Type(int32_t value) {
		return ((R (*)(VipUserBonus*, int32_t))(Il2CppBase() + 0x15D0304))(this, value);
	}
	template <typename R = int32_t> R get_IntValue() {
		return ((R (*)(VipUserBonus*))(Il2CppBase() + 0x15D030C))(this);
	}
	template <typename R = void> R set_IntValue(int32_t value) {
		return ((R (*)(VipUserBonus*, int32_t))(Il2CppBase() + 0x15D0314))(this, value);
	}
	template <typename R = Il2CppString*> R get_StringValue() {
		return ((R (*)(VipUserBonus*))(Il2CppBase() + 0x15D031C))(this);
	}
	template <typename R = void> R set_StringValue(Il2CppString* value) {
		return ((R (*)(VipUserBonus*, Il2CppString*))(Il2CppBase() + 0x15D0324))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(VipUserBonus*, Il2CppObject*))(Il2CppBase() + 0x15D03A4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::VipUserBonus* other) {
		return ((R (*)(VipUserBonus*, ProtoModels::VipUserBonus*))(Il2CppBase() + 0x15D0414))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(VipUserBonus*))(Il2CppBase() + 0x15D0488))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(VipUserBonus*))(Il2CppBase() + 0x15D0538))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(VipUserBonus*, uintptr_t))(Il2CppBase() + 0x15D059C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(VipUserBonus*))(Il2CppBase() + 0x15D0680))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::VipUserBonus* other) {
		return ((R (*)(VipUserBonus*, ProtoModels::VipUserBonus*))(Il2CppBase() + 0x15D07C0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(VipUserBonus*, uintptr_t))(Il2CppBase() + 0x15D080C))(this, input);
	}

};

}
