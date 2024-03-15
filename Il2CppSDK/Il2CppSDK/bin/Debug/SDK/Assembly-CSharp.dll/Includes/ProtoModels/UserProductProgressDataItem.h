#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserProductProgressDataItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserProductProgressDataItem"));
	}

	 static MessageParser1ProtoModels::UserProductProgressDataItem*>*& _parser() {
		return *(MessageParser1ProtoModels::UserProductProgressDataItem*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::UserProductProgressDataItem*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserProductProgressDataItem*>* (*)(void *))(Il2CppBase() + 0x2471C28))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2471C8C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2471DAC))(this);
	}
	template <typename R = ProtoModels::UserProductProgressDataItem*> R Clone() {
		return ((R (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2471354))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2471E48))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(UserProductProgressDataItem*, Il2CppString*))(Il2CppBase() + 0x2471E50))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2471ED0))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(UserProductProgressDataItem*, int32_t))(Il2CppBase() + 0x2471ED8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserProductProgressDataItem*, Il2CppObject*))(Il2CppBase() + 0x2471EE0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserProductProgressDataItem* other) {
		return ((R (*)(UserProductProgressDataItem*, ProtoModels::UserProductProgressDataItem*))(Il2CppBase() + 0x2471F50))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2471FB0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2472024))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserProductProgressDataItem*, uintptr_t))(Il2CppBase() + 0x2472088))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2472114))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserProductProgressDataItem* other) {
		return ((R (*)(UserProductProgressDataItem*, ProtoModels::UserProductProgressDataItem*))(Il2CppBase() + 0x24718CC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserProductProgressDataItem*, uintptr_t))(Il2CppBase() + 0x24721DC))(this, input);
	}

};

}
