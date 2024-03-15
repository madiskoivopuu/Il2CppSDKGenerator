#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DisbandGuildResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DisbandGuildResponse"));
	}

	 static MessageParser1ProtoModels::DisbandGuildResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::DisbandGuildResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PlayersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::Player*>*& _repeated_players_codec() {
		return *(FieldCodec1ProtoModels::Player*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::Player*>*& players_() {
		return *(RepeatedField1ProtoModels::Player*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::DisbandGuildResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::DisbandGuildResponse*>* (*)(void *))(Il2CppBase() + 0x1301938))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x130199C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301ABC))(this);
	}
	template <typename R = ProtoModels::DisbandGuildResponse*> R Clone() {
		return ((R (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301C20))(this);
	}
	 RepeatedField1ProtoModels::Player*>* get_Players() {
		return ((RepeatedField1ProtoModels::Player*>* (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301C7C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301C84))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(DisbandGuildResponse*, int32_t))(Il2CppBase() + 0x1301C8C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(DisbandGuildResponse*, Il2CppObject*))(Il2CppBase() + 0x1301C94))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::DisbandGuildResponse* other) {
		return ((R (*)(DisbandGuildResponse*, ProtoModels::DisbandGuildResponse*))(Il2CppBase() + 0x1301D04))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301D9C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301DF8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(DisbandGuildResponse*, uintptr_t))(Il2CppBase() + 0x1301E5C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301F38))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::DisbandGuildResponse* other) {
		return ((R (*)(DisbandGuildResponse*, ProtoModels::DisbandGuildResponse*))(Il2CppBase() + 0x1302024))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(DisbandGuildResponse*, uintptr_t))(Il2CppBase() + 0x130209C))(this, input);
	}

};

}
