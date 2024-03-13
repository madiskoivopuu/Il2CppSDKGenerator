#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class VipUserBonus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "VipUserBonus"));
	}

	template <typename T = MessageParser1VipUserBonus*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& type_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& IntValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& intValue_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& StringValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& stringValue_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1VipUserBonus*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15D0008))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15D006C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(VipUserBonus*))(Il2CppBase() + 0x15D018C))(this);
	}
	template <typename T = VipUserBonus*> T Clone() {
		return ((T (*)(VipUserBonus*))(Il2CppBase() + 0x15D0290))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(VipUserBonus*))(Il2CppBase() + 0x15D02EC))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(VipUserBonus*, int64_t))(Il2CppBase() + 0x15D02F4))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(VipUserBonus*))(Il2CppBase() + 0x15D02FC))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(VipUserBonus*, int32_t))(Il2CppBase() + 0x15D0304))(this, value);
	}
	template <typename T = int32_t> T get_IntValue() {
		return ((T (*)(VipUserBonus*))(Il2CppBase() + 0x15D030C))(this);
	}
	template <typename T = void> T set_IntValue(int32_t value) {
		return ((T (*)(VipUserBonus*, int32_t))(Il2CppBase() + 0x15D0314))(this, value);
	}
	template <typename T = Il2CppString*> T get_StringValue() {
		return ((T (*)(VipUserBonus*))(Il2CppBase() + 0x15D031C))(this);
	}
	template <typename T = void> T set_StringValue(Il2CppString* value) {
		return ((T (*)(VipUserBonus*, Il2CppString*))(Il2CppBase() + 0x15D0324))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(VipUserBonus*, Il2CppObject*))(Il2CppBase() + 0x15D03A4))(this, other);
	}
	template <typename T = bool> T Equals_1(VipUserBonus* other) {
		return ((T (*)(VipUserBonus*, VipUserBonus*))(Il2CppBase() + 0x15D0414))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(VipUserBonus*))(Il2CppBase() + 0x15D0488))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(VipUserBonus*))(Il2CppBase() + 0x15D0538))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(VipUserBonus*, uintptr_t))(Il2CppBase() + 0x15D059C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(VipUserBonus*))(Il2CppBase() + 0x15D0680))(this);
	}
	template <typename T = void> T MergeFrom(VipUserBonus* other) {
		return ((T (*)(VipUserBonus*, VipUserBonus*))(Il2CppBase() + 0x15D07C0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(VipUserBonus*, uintptr_t))(Il2CppBase() + 0x15D080C))(this, input);
	}

};

}
