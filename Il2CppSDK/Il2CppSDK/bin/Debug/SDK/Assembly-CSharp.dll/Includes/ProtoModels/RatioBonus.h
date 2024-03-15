#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioBonus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioBonus"));
	}

	 static MessageParser1<ProtoModels::RatioBonus*>*& _parser() {
		return *(MessageParser1<ProtoModels::RatioBonus*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ItemFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& item_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::RatioBonus*>* get_Parser() {
		return ((MessageParser1<ProtoModels::RatioBonus*>* (*)(void *))(Il2CppBase() + 0x138A69C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x138A700))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioBonus*))(Il2CppBase() + 0x138A820))(this);
	}
	template <typename R = ProtoModels::RatioBonus*> R Clone() {
		return ((R (*)(RatioBonus*))(Il2CppBase() + 0x138A918))(this);
	}
	template <typename R = Il2CppString*> R get_Item() {
		return ((R (*)(RatioBonus*))(Il2CppBase() + 0x138A974))(this);
	}
	template <typename R = void> R set_Item(Il2CppString* value) {
		return ((R (*)(RatioBonus*, Il2CppString*))(Il2CppBase() + 0x138A97C))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(RatioBonus*))(Il2CppBase() + 0x138A9FC))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(RatioBonus*, int32_t))(Il2CppBase() + 0x138AA04))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioBonus*, Il2CppObject*))(Il2CppBase() + 0x138AA0C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioBonus* other) {
		return ((R (*)(RatioBonus*, ProtoModels::RatioBonus*))(Il2CppBase() + 0x138AA7C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioBonus*))(Il2CppBase() + 0x138AADC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioBonus*))(Il2CppBase() + 0x138AB50))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioBonus*, uintptr_t))(Il2CppBase() + 0x138ABB4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioBonus*))(Il2CppBase() + 0x138AC40))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioBonus* other) {
		return ((R (*)(RatioBonus*, ProtoModels::RatioBonus*))(Il2CppBase() + 0x138AD08))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioBonus*, uintptr_t))(Il2CppBase() + 0x138AD54))(this, input);
	}

};

}
