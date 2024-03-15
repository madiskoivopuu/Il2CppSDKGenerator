#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DiplomaciesResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DiplomaciesResponse"));
	}

	 static MessageParser1<ProtoModels::DiplomaciesResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::DiplomaciesResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PvpIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pvpID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& DiplomaciesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Diplomacy*>*& _repeated_diplomacies_codec() {
		return *(FieldCodec1<ProtoModels::Diplomacy*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::Diplomacy*>*& diplomacies_() {
		return *(RepeatedField1<ProtoModels::Diplomacy*>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::DiplomaciesResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::DiplomaciesResponse*>* (*)(void *))(Il2CppBase() + 0x12FA71C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12FA780))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FA8A0))(this);
	}
	template <typename R = ProtoModels::DiplomaciesResponse*> R Clone() {
		return ((R (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAA3C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAA98))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(DiplomaciesResponse*, int32_t))(Il2CppBase() + 0x12FAAA0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAAA8))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(DiplomaciesResponse*, Il2CppString*))(Il2CppBase() + 0x12FAAB0))(this, value);
	}
	template <typename R = int64_t> R get_PvpID() {
		return ((R (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAB30))(this);
	}
	template <typename R = void> R set_PvpID(int64_t value) {
		return ((R (*)(DiplomaciesResponse*, int64_t))(Il2CppBase() + 0x12FAB38))(this, value);
	}
	 RepeatedField1<ProtoModels::Diplomacy*>* get_Diplomacies() {
		return ((RepeatedField1<ProtoModels::Diplomacy*>* (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAB40))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(DiplomaciesResponse*, Il2CppObject*))(Il2CppBase() + 0x12FAB48))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::DiplomaciesResponse* other) {
		return ((R (*)(DiplomaciesResponse*, ProtoModels::DiplomaciesResponse*))(Il2CppBase() + 0x12FABB8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAC78))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAD20))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(DiplomaciesResponse*, uintptr_t))(Il2CppBase() + 0x12FAD84))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAEB0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::DiplomaciesResponse* other) {
		return ((R (*)(DiplomaciesResponse*, ProtoModels::DiplomaciesResponse*))(Il2CppBase() + 0x12FB01C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(DiplomaciesResponse*, uintptr_t))(Il2CppBase() + 0x12FB0C4))(this, input);
	}

};

}
