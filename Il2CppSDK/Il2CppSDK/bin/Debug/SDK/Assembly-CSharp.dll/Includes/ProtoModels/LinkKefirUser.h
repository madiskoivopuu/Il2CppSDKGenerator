#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LinkKefirUser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LinkKefirUser"));
	}

	 static MessageParser1ProtoModels::LinkKefirUser*>*& _parser() {
		return *(MessageParser1ProtoModels::LinkKefirUser*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& IsLinkFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isLink_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	 static MessageParser1ProtoModels::LinkKefirUser*>* get_Parser() {
		return ((MessageParser1ProtoModels::LinkKefirUser*>* (*)(void *))(Il2CppBase() + 0x142E0B0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x142E114))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(LinkKefirUser*))(Il2CppBase() + 0x142E234))(this);
	}
	template <typename R = ProtoModels::LinkKefirUser*> R Clone() {
		return ((R (*)(LinkKefirUser*))(Il2CppBase() + 0x142E374))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(LinkKefirUser*))(Il2CppBase() + 0x142E3D0))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(LinkKefirUser*, Il2CppString*))(Il2CppBase() + 0x142E3D8))(this, value);
	}
	template <typename R = Il2CppString*> R get_BattleTag() {
		return ((R (*)(LinkKefirUser*))(Il2CppBase() + 0x142E458))(this);
	}
	template <typename R = void> R set_BattleTag(Il2CppString* value) {
		return ((R (*)(LinkKefirUser*, Il2CppString*))(Il2CppBase() + 0x142E460))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(LinkKefirUser*))(Il2CppBase() + 0x142E4E0))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(LinkKefirUser*, Il2CppString*))(Il2CppBase() + 0x142E4E8))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(LinkKefirUser*))(Il2CppBase() + 0x142E568))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(LinkKefirUser*, int32_t))(Il2CppBase() + 0x142E570))(this, value);
	}
	template <typename R = bool> R get_IsLink() {
		return ((R (*)(LinkKefirUser*))(Il2CppBase() + 0x142E578))(this);
	}
	template <typename R = void> R set_IsLink(bool value) {
		return ((R (*)(LinkKefirUser*, bool))(Il2CppBase() + 0x142E580))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(LinkKefirUser*, Il2CppObject*))(Il2CppBase() + 0x142E58C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::LinkKefirUser* other) {
		return ((R (*)(LinkKefirUser*, ProtoModels::LinkKefirUser*))(Il2CppBase() + 0x142E5FC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LinkKefirUser*))(Il2CppBase() + 0x142E6A0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LinkKefirUser*))(Il2CppBase() + 0x142E778))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(LinkKefirUser*, uintptr_t))(Il2CppBase() + 0x142E7DC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(LinkKefirUser*))(Il2CppBase() + 0x142E8FC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::LinkKefirUser* other) {
		return ((R (*)(LinkKefirUser*, ProtoModels::LinkKefirUser*))(Il2CppBase() + 0x142EA60))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(LinkKefirUser*, uintptr_t))(Il2CppBase() + 0x142EAE8))(this, input);
	}

};

}
