#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ShortServerUserInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ShortServerUserInfo"));
	}

	 static MessageParser1ProtoModels::ShortServerUserInfo*>*& _parser() {
		return *(MessageParser1ProtoModels::ShortServerUserInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& BattleTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& battleTag_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ShortServerUserInfo*>* get_Parser() {
		return ((MessageParser1ProtoModels::ShortServerUserInfo*>* (*)(void *))(Il2CppBase() + 0x1630A8C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1630AF0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ShortServerUserInfo*))(Il2CppBase() + 0x1630C10))(this);
	}
	template <typename R = ProtoModels::ShortServerUserInfo*> R Clone() {
		return ((R (*)(ShortServerUserInfo*))(Il2CppBase() + 0x1630D3C))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ShortServerUserInfo*))(Il2CppBase() + 0x1630D98))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ShortServerUserInfo*, Il2CppString*))(Il2CppBase() + 0x1630DA0))(this, value);
	}
	template <typename R = Il2CppString*> R get_BattleTag() {
		return ((R (*)(ShortServerUserInfo*))(Il2CppBase() + 0x1630E20))(this);
	}
	template <typename R = void> R set_BattleTag(Il2CppString* value) {
		return ((R (*)(ShortServerUserInfo*, Il2CppString*))(Il2CppBase() + 0x1630E28))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(ShortServerUserInfo*))(Il2CppBase() + 0x1630EA8))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(ShortServerUserInfo*, Il2CppString*))(Il2CppBase() + 0x1630EB0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ShortServerUserInfo*, Il2CppObject*))(Il2CppBase() + 0x1630F30))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ShortServerUserInfo* other) {
		return ((R (*)(ShortServerUserInfo*, ProtoModels::ShortServerUserInfo*))(Il2CppBase() + 0x1630FA0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ShortServerUserInfo*))(Il2CppBase() + 0x163101C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ShortServerUserInfo*))(Il2CppBase() + 0x16310A8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ShortServerUserInfo*, uintptr_t))(Il2CppBase() + 0x163110C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ShortServerUserInfo*))(Il2CppBase() + 0x16311D4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ShortServerUserInfo* other) {
		return ((R (*)(ShortServerUserInfo*, ProtoModels::ShortServerUserInfo*))(Il2CppBase() + 0x16312F0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ShortServerUserInfo*, uintptr_t))(Il2CppBase() + 0x1631368))(this, input);
	}

};

}
