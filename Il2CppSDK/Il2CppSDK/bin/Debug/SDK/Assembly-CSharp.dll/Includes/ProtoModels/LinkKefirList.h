#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LinkKefirList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LinkKefirList"));
	}

	 static MessageParser1<ProtoModels::LinkKefirList*>*& _parser() {
		return *(MessageParser1<ProtoModels::LinkKefirList*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::LinkKefirUser*>*& _repeated_users_codec() {
		return *(FieldCodec1<ProtoModels::LinkKefirUser*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::LinkKefirUser*>*& users_() {
		return *(RepeatedField1<ProtoModels::LinkKefirUser*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::LinkKefirList*>* get_Parser() {
		return ((MessageParser1<ProtoModels::LinkKefirList*>* (*)(void *))(Il2CppBase() + 0x142D790))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x142D7F4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(LinkKefirList*))(Il2CppBase() + 0x142D914))(this);
	}
	template <typename R = ProtoModels::LinkKefirList*> R Clone() {
		return ((R (*)(LinkKefirList*))(Il2CppBase() + 0x142DA6C))(this);
	}
	 RepeatedField1<ProtoModels::LinkKefirUser*>* get_Users() {
		return ((RepeatedField1<ProtoModels::LinkKefirUser*>* (*)(LinkKefirList*))(Il2CppBase() + 0x142DAC8))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(LinkKefirList*, Il2CppObject*))(Il2CppBase() + 0x142DAD0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::LinkKefirList* other) {
		return ((R (*)(LinkKefirList*, ProtoModels::LinkKefirList*))(Il2CppBase() + 0x142DB40))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LinkKefirList*))(Il2CppBase() + 0x142DBCC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LinkKefirList*))(Il2CppBase() + 0x142DBF8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(LinkKefirList*, uintptr_t))(Il2CppBase() + 0x142DC5C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(LinkKefirList*))(Il2CppBase() + 0x142DCFC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::LinkKefirList* other) {
		return ((R (*)(LinkKefirList*, ProtoModels::LinkKefirList*))(Il2CppBase() + 0x142DD8C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(LinkKefirList*, uintptr_t))(Il2CppBase() + 0x142DE04))(this, input);
	}

};

}
