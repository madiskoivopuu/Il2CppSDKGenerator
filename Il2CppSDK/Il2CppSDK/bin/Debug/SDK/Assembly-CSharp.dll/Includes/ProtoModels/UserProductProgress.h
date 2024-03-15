#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserProductProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserProductProgress"));
	}

	 static MessageParser1ProtoModels::UserProductProgress*>*& _parser() {
		return *(MessageParser1ProtoModels::UserProductProgress*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& RollCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& rollCount_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& DataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::UserProductProgressData*>*& _repeated_data_codec() {
		return *(FieldCodec1ProtoModels::UserProductProgressData*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::UserProductProgressData*>*& data_() {
		return *(RepeatedField1ProtoModels::UserProductProgressData*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::UserProductProgress*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserProductProgress*>* (*)(void *))(Il2CppBase() + 0x2470468))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x24704CC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserProductProgress*))(Il2CppBase() + 0x24705EC))(this);
	}
	template <typename R = ProtoModels::UserProductProgress*> R Clone() {
		return ((R (*)(UserProductProgress*))(Il2CppBase() + 0x2470784))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(UserProductProgress*))(Il2CppBase() + 0x24707E0))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(UserProductProgress*, Il2CppString*))(Il2CppBase() + 0x24707E8))(this, value);
	}
	template <typename R = int32_t> R get_RollCount() {
		return ((R (*)(UserProductProgress*))(Il2CppBase() + 0x2470868))(this);
	}
	template <typename R = void> R set_RollCount(int32_t value) {
		return ((R (*)(UserProductProgress*, int32_t))(Il2CppBase() + 0x2470870))(this, value);
	}
	 RepeatedField1ProtoModels::UserProductProgressData*>* get_Data() {
		return ((RepeatedField1ProtoModels::UserProductProgressData*>* (*)(UserProductProgress*))(Il2CppBase() + 0x2470878))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserProductProgress*, Il2CppObject*))(Il2CppBase() + 0x2470880))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserProductProgress* other) {
		return ((R (*)(UserProductProgress*, ProtoModels::UserProductProgress*))(Il2CppBase() + 0x24708F0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserProductProgress*))(Il2CppBase() + 0x24709A0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserProductProgress*))(Il2CppBase() + 0x2470A28))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserProductProgress*, uintptr_t))(Il2CppBase() + 0x2470A8C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserProductProgress*))(Il2CppBase() + 0x2470B8C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserProductProgress* other) {
		return ((R (*)(UserProductProgress*, ProtoModels::UserProductProgress*))(Il2CppBase() + 0x2470CBC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserProductProgress*, uintptr_t))(Il2CppBase() + 0x2470D58))(this, input);
	}

};

}
