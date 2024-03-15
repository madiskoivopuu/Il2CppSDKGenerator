#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioOneTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioOneTable"));
	}

	 static MessageParser1<ProtoModels::RatioOneTable*>*& _parser() {
		return *(MessageParser1<ProtoModels::RatioOneTable*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& LinesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::RatioLine*>*& _repeated_lines_codec() {
		return *(FieldCodec1<ProtoModels::RatioLine*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::RatioLine*>*& lines_() {
		return *(RepeatedField1<ProtoModels::RatioLine*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::RatioOneTable*>* get_Parser() {
		return ((MessageParser1<ProtoModels::RatioOneTable*>* (*)(void *))(Il2CppBase() + 0x138BEBC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x138BF20))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioOneTable*))(Il2CppBase() + 0x138C040))(this);
	}
	template <typename R = ProtoModels::RatioOneTable*> R Clone() {
		return ((R (*)(RatioOneTable*))(Il2CppBase() + 0x138C198))(this);
	}
	 RepeatedField1<ProtoModels::RatioLine*>* get_Lines() {
		return ((RepeatedField1<ProtoModels::RatioLine*>* (*)(RatioOneTable*))(Il2CppBase() + 0x138C1F4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioOneTable*, Il2CppObject*))(Il2CppBase() + 0x138C1FC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioOneTable* other) {
		return ((R (*)(RatioOneTable*, ProtoModels::RatioOneTable*))(Il2CppBase() + 0x138C26C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioOneTable*))(Il2CppBase() + 0x138C2F8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioOneTable*))(Il2CppBase() + 0x138C324))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioOneTable*, uintptr_t))(Il2CppBase() + 0x138C388))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioOneTable*))(Il2CppBase() + 0x138C428))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioOneTable* other) {
		return ((R (*)(RatioOneTable*, ProtoModels::RatioOneTable*))(Il2CppBase() + 0x138C4B8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioOneTable*, uintptr_t))(Il2CppBase() + 0x138C530))(this, input);
	}

};

}
