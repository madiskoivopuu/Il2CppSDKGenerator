#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Diplomacy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Diplomacy"));
	}

	template <typename T = MessageParser1Diplomacy*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& FromClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& fromClanID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ToClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& toClanID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& StateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DiplomacyState*> T& state_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1Diplomacy*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FB3E0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FB444))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Diplomacy*))(Il2CppBase() + 0x12FB564))(this);
	}
	template <typename T = Diplomacy*> T Clone() {
		return ((T (*)(Diplomacy*))(Il2CppBase() + 0x12FB614))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(Diplomacy*))(Il2CppBase() + 0x12FB670))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(Diplomacy*, int64_t))(Il2CppBase() + 0x12FB678))(this, value);
	}
	template <typename T = int64_t> T get_FromClanID() {
		return ((T (*)(Diplomacy*))(Il2CppBase() + 0x12FB680))(this);
	}
	template <typename T = void> T set_FromClanID(int64_t value) {
		return ((T (*)(Diplomacy*, int64_t))(Il2CppBase() + 0x12FB688))(this, value);
	}
	template <typename T = int64_t> T get_ToClanID() {
		return ((T (*)(Diplomacy*))(Il2CppBase() + 0x12FB690))(this);
	}
	template <typename T = void> T set_ToClanID(int64_t value) {
		return ((T (*)(Diplomacy*, int64_t))(Il2CppBase() + 0x12FB698))(this, value);
	}
	template <typename T = DiplomacyState*> T get_State() {
		return ((T (*)(Diplomacy*))(Il2CppBase() + 0x12FB6A0))(this);
	}
	template <typename T = void> T set_State(DiplomacyState* value) {
		return ((T (*)(Diplomacy*, DiplomacyState*))(Il2CppBase() + 0x12FB6A8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(Diplomacy*, Il2CppObject*))(Il2CppBase() + 0x12FB6B0))(this, other);
	}
	template <typename T = bool> T Equals_1(Diplomacy* other) {
		return ((T (*)(Diplomacy*, Diplomacy*))(Il2CppBase() + 0x12FB720))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Diplomacy*))(Il2CppBase() + 0x12FB780))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Diplomacy*))(Il2CppBase() + 0x12FB828))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Diplomacy*, uintptr_t))(Il2CppBase() + 0x12FB88C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Diplomacy*))(Il2CppBase() + 0x12FB968))(this);
	}
	template <typename T = void> T MergeFrom(Diplomacy* other) {
		return ((T (*)(Diplomacy*, Diplomacy*))(Il2CppBase() + 0x12FBA9C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Diplomacy*, uintptr_t))(Il2CppBase() + 0x12FBAD4))(this, input);
	}

};

}
