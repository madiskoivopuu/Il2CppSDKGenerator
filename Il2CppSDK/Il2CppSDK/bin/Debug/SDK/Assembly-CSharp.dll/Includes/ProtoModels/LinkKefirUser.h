#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LinkKefirUser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LinkKefirUser"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& BattleTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& battleTag_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& IsLinkFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isLink_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x142E0B0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x142E114))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(LinkKefirUser*))(Il2CppBase() + 0x142E234))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(LinkKefirUser*))(Il2CppBase() + 0x142E374))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(LinkKefirUser*))(Il2CppBase() + 0x142E3D0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(LinkKefirUser*, Il2CppString*))(Il2CppBase() + 0x142E3D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_BattleTag() {
		return ((T (*)(LinkKefirUser*))(Il2CppBase() + 0x142E458))(this);
	}
	template <typename T = void> T set_BattleTag(Il2CppString* value) {
		return ((T (*)(LinkKefirUser*, Il2CppString*))(Il2CppBase() + 0x142E460))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(LinkKefirUser*))(Il2CppBase() + 0x142E4E0))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(LinkKefirUser*, Il2CppString*))(Il2CppBase() + 0x142E4E8))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(LinkKefirUser*))(Il2CppBase() + 0x142E568))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(LinkKefirUser*, int32_t))(Il2CppBase() + 0x142E570))(this, value);
	}
	template <typename T = bool> T get_IsLink() {
		return ((T (*)(LinkKefirUser*))(Il2CppBase() + 0x142E578))(this);
	}
	template <typename T = void> T set_IsLink(bool value) {
		return ((T (*)(LinkKefirUser*, bool))(Il2CppBase() + 0x142E580))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(LinkKefirUser*, uintptr_t))(Il2CppBase() + 0x142E58C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(LinkKefirUser*, uintptr_t))(Il2CppBase() + 0x142E5FC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LinkKefirUser*))(Il2CppBase() + 0x142E6A0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LinkKefirUser*))(Il2CppBase() + 0x142E778))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(LinkKefirUser*, uintptr_t))(Il2CppBase() + 0x142E7DC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(LinkKefirUser*))(Il2CppBase() + 0x142E8FC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(LinkKefirUser*, uintptr_t))(Il2CppBase() + 0x142EA60))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(LinkKefirUser*, uintptr_t))(Il2CppBase() + 0x142EAE8))(this, input);
	}

};

}
