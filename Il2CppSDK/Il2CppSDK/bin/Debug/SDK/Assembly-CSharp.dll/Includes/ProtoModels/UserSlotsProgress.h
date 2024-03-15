#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserSlotsProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserSlotsProgress"));
	}

	 static MessageParser1ProtoModels::UserSlotsProgress*>*& _parser() {
		return *(MessageParser1ProtoModels::UserSlotsProgress*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ItemsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::UserProductProgressDataItem*>*& _repeated_items_codec() {
		return *(FieldCodec1ProtoModels::UserProductProgressDataItem*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::UserProductProgressDataItem*>*& items_() {
		return *(RepeatedField1ProtoModels::UserProductProgressDataItem*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::UserSlotsProgress*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserSlotsProgress*>* (*)(void *))(Il2CppBase() + 0x15B9EF4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15B9F58))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA078))(this);
	}
	template <typename R = ProtoModels::UserSlotsProgress*> R Clone() {
		return ((R (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA1D0))(this);
	}
	 RepeatedField1ProtoModels::UserProductProgressDataItem*>* get_Items() {
		return ((RepeatedField1ProtoModels::UserProductProgressDataItem*>* (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA22C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserSlotsProgress*, Il2CppObject*))(Il2CppBase() + 0x15BA234))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserSlotsProgress* other) {
		return ((R (*)(UserSlotsProgress*, ProtoModels::UserSlotsProgress*))(Il2CppBase() + 0x15BA2A4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA330))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA35C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserSlotsProgress*, uintptr_t))(Il2CppBase() + 0x15BA3C0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA460))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserSlotsProgress* other) {
		return ((R (*)(UserSlotsProgress*, ProtoModels::UserSlotsProgress*))(Il2CppBase() + 0x15BA4F0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserSlotsProgress*, uintptr_t))(Il2CppBase() + 0x15BA568))(this, input);
	}

};

}
