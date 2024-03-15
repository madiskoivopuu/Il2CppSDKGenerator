#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaVipBonus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaVipBonus"));
	}

	 static MessageParser1ProtoModels::ArenaVipBonus*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaVipBonus*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ImageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& image_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& type_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& IntValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& intValue_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& StringValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& stringValue_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& IsNewFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isNew_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::ArenaVipBonus*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaVipBonus*>* (*)(void *))(Il2CppBase() + 0x2865F98))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2865FFC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x286611C))(this);
	}
	template <typename R = ProtoModels::ArenaVipBonus*> R Clone() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x2866264))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x28662C0))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaVipBonus*, Il2CppString*))(Il2CppBase() + 0x28662C8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Image() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x2866348))(this);
	}
	template <typename R = void> R set_Image(Il2CppString* value) {
		return ((R (*)(ArenaVipBonus*, Il2CppString*))(Il2CppBase() + 0x2866350))(this, value);
	}
	template <typename R = int32_t> R get_Type() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x28663D0))(this);
	}
	template <typename R = void> R set_Type(int32_t value) {
		return ((R (*)(ArenaVipBonus*, int32_t))(Il2CppBase() + 0x28663D8))(this, value);
	}
	template <typename R = int32_t> R get_IntValue() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x28663E0))(this);
	}
	template <typename R = void> R set_IntValue(int32_t value) {
		return ((R (*)(ArenaVipBonus*, int32_t))(Il2CppBase() + 0x28663E8))(this, value);
	}
	template <typename R = Il2CppString*> R get_StringValue() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x28663F0))(this);
	}
	template <typename R = void> R set_StringValue(Il2CppString* value) {
		return ((R (*)(ArenaVipBonus*, Il2CppString*))(Il2CppBase() + 0x28663F8))(this, value);
	}
	template <typename R = bool> R get_IsNew() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x2866478))(this);
	}
	template <typename R = void> R set_IsNew(bool value) {
		return ((R (*)(ArenaVipBonus*, bool))(Il2CppBase() + 0x2866480))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaVipBonus*, Il2CppObject*))(Il2CppBase() + 0x286648C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaVipBonus* other) {
		return ((R (*)(ArenaVipBonus*, ProtoModels::ArenaVipBonus*))(Il2CppBase() + 0x28664FC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x28665B0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x28666A4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaVipBonus*, uintptr_t))(Il2CppBase() + 0x2866708))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaVipBonus*))(Il2CppBase() + 0x2866854))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaVipBonus* other) {
		return ((R (*)(ArenaVipBonus*, ProtoModels::ArenaVipBonus*))(Il2CppBase() + 0x28669F4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaVipBonus*, uintptr_t))(Il2CppBase() + 0x2866A88))(this, input);
	}

};

}
