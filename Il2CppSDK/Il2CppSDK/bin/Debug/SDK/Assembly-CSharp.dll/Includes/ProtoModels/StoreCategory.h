#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StoreCategory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StoreCategory"));
	}

	 static MessageParser1ProtoModels::StoreCategory*>*& _parser() {
		return *(MessageParser1ProtoModels::StoreCategory*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& EventsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::StoreCategoryEvent*>*& _repeated_events_codec() {
		return *(FieldCodec1ProtoModels::StoreCategoryEvent*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::StoreCategoryEvent*>*& events_() {
		return *(RepeatedField1ProtoModels::StoreCategoryEvent*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& TagsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_tags_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1Il2CppString*>*& tags_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::StoreCategory*>* get_Parser() {
		return ((MessageParser1ProtoModels::StoreCategory*>* (*)(void *))(Il2CppBase() + 0x141D118))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x141D17C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(StoreCategory*))(Il2CppBase() + 0x141D29C))(this);
	}
	template <typename R = ProtoModels::StoreCategory*> R Clone() {
		return ((R (*)(StoreCategory*))(Il2CppBase() + 0x141D4B0))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(StoreCategory*))(Il2CppBase() + 0x141D50C))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(StoreCategory*, int64_t))(Il2CppBase() + 0x141D514))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(StoreCategory*))(Il2CppBase() + 0x141D51C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(StoreCategory*, Il2CppString*))(Il2CppBase() + 0x141D524))(this, value);
	}
	 RepeatedField1ProtoModels::StoreCategoryEvent*>* get_Events() {
		return ((RepeatedField1ProtoModels::StoreCategoryEvent*>* (*)(StoreCategory*))(Il2CppBase() + 0x141D5A4))(this);
	}
	 RepeatedField1Il2CppString*>* get_Tags() {
		return ((RepeatedField1Il2CppString*>* (*)(StoreCategory*))(Il2CppBase() + 0x141D5AC))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(StoreCategory*, Il2CppObject*))(Il2CppBase() + 0x141D5B4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::StoreCategory* other) {
		return ((R (*)(StoreCategory*, ProtoModels::StoreCategory*))(Il2CppBase() + 0x141D624))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(StoreCategory*))(Il2CppBase() + 0x141D700))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(StoreCategory*))(Il2CppBase() + 0x141D7A4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(StoreCategory*, uintptr_t))(Il2CppBase() + 0x141D808))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(StoreCategory*))(Il2CppBase() + 0x141D93C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::StoreCategory* other) {
		return ((R (*)(StoreCategory*, ProtoModels::StoreCategory*))(Il2CppBase() + 0x141DAA4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(StoreCategory*, uintptr_t))(Il2CppBase() + 0x141DB68))(this, input);
	}

};

}
