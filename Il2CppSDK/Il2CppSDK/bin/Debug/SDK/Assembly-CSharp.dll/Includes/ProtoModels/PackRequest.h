#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PackRequest"));
	}

	 static MessageParser1ProtoModels::PackRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::PackRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& IncomeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::PackIncome*>*& _repeated_income_codec() {
		return *(FieldCodec1ProtoModels::PackIncome*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::PackIncome*>*& income_() {
		return *(RepeatedField1ProtoModels::PackIncome*>**)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::PackRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::PackRequest*>* (*)(void *))(Il2CppBase() + 0x11E7D5C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11E7DC0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PackRequest*))(Il2CppBase() + 0x11E7EE0))(this);
	}
	template <typename R = ProtoModels::PackRequest*> R Clone() {
		return ((R (*)(PackRequest*))(Il2CppBase() + 0x11E8040))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(PackRequest*))(Il2CppBase() + 0x11E809C))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(PackRequest*, int64_t))(Il2CppBase() + 0x11E80A4))(this, value);
	}
	 RepeatedField1ProtoModels::PackIncome*>* get_Income() {
		return ((RepeatedField1ProtoModels::PackIncome*>* (*)(PackRequest*))(Il2CppBase() + 0x11E80AC))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PackRequest*, Il2CppObject*))(Il2CppBase() + 0x11E80B4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PackRequest* other) {
		return ((R (*)(PackRequest*, ProtoModels::PackRequest*))(Il2CppBase() + 0x11E8124))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PackRequest*))(Il2CppBase() + 0x11E81C0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PackRequest*))(Il2CppBase() + 0x11E8228))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PackRequest*, uintptr_t))(Il2CppBase() + 0x11E828C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PackRequest*))(Il2CppBase() + 0x11E8368))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PackRequest* other) {
		return ((R (*)(PackRequest*, ProtoModels::PackRequest*))(Il2CppBase() + 0x11E844C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PackRequest*, uintptr_t))(Il2CppBase() + 0x11E84D0))(this, input);
	}

};

}
