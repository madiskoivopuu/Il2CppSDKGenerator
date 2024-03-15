#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Currencies
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Currencies"));
	}

	 static MessageParser1ProtoModels::Currencies*>*& _parser() {
		return *(MessageParser1ProtoModels::Currencies*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Currencies_FieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codecint32_t, int32_t>*& _map_currencies_codec() {
		return *(Codecint32_t, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2int32_t, int32_t>*& currencies_() {
		return *(MapField2int32_t, int32_t>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::Currencies*>* get_Parser() {
		return ((MessageParser1ProtoModels::Currencies*>* (*)(void *))(Il2CppBase() + 0x1BCE29C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1BCE300))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Currencies*))(Il2CppBase() + 0x1BCE420))(this);
	}
	template <typename R = ProtoModels::Currencies*> R Clone() {
		return ((R (*)(Currencies*))(Il2CppBase() + 0x1BCA578))(this);
	}
	 MapField2int32_t, int32_t>* get_Currencies_() {
		return ((MapField2int32_t, int32_t>* (*)(Currencies*))(Il2CppBase() + 0x1BCE4F4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Currencies*, Il2CppObject*))(Il2CppBase() + 0x1BCE4FC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Currencies* other) {
		return ((R (*)(Currencies*, ProtoModels::Currencies*))(Il2CppBase() + 0x1BCE56C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Currencies*))(Il2CppBase() + 0x1BCE5F8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Currencies*))(Il2CppBase() + 0x1BCE624))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Currencies*, uintptr_t))(Il2CppBase() + 0x1BCE688))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Currencies*))(Il2CppBase() + 0x1BCE728))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Currencies* other) {
		return ((R (*)(Currencies*, ProtoModels::Currencies*))(Il2CppBase() + 0x1BCAC14))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Currencies*, uintptr_t))(Il2CppBase() + 0x1BCE7B8))(this, input);
	}

};

}
