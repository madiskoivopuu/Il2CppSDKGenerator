#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Currencies
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Currencies"));
	}

	template <typename T = MessageParser1Currencies*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Currencies_FieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Codecint32_t, int32_t>*> static T& _map_currencies_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = MapField2int32_t, int32_t>*> T& currencies_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1Currencies*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BCE29C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BCE300))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Currencies*))(Il2CppBase() + 0x1BCE420))(this);
	}
	template <typename T = Currencies*> T Clone() {
		return ((T (*)(Currencies*))(Il2CppBase() + 0x1BCA578))(this);
	}
	template <typename T = MapField2int32_t, int32_t>*> T get_Currencies_() {
		return ((T (*)(Currencies*))(Il2CppBase() + 0x1BCE4F4))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(Currencies*, Il2CppObject*))(Il2CppBase() + 0x1BCE4FC))(this, other);
	}
	template <typename T = bool> T Equals_1(Currencies* other) {
		return ((T (*)(Currencies*, Currencies*))(Il2CppBase() + 0x1BCE56C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Currencies*))(Il2CppBase() + 0x1BCE5F8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Currencies*))(Il2CppBase() + 0x1BCE624))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Currencies*, uintptr_t))(Il2CppBase() + 0x1BCE688))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Currencies*))(Il2CppBase() + 0x1BCE728))(this);
	}
	template <typename T = void> T MergeFrom(Currencies* other) {
		return ((T (*)(Currencies*, Currencies*))(Il2CppBase() + 0x1BCAC14))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Currencies*, uintptr_t))(Il2CppBase() + 0x1BCE7B8))(this, input);
	}

};

}
