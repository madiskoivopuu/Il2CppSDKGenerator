#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaVipBonus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaVipBonus"));
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
	template <typename T = int32_t> static T& ImageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& image_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& type_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& IntValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& intValue_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& StringValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& stringValue_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& IsNewFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isNew_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2865F98))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2865FFC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x286611C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x2866264))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x28662C0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaVipBonus*, Il2CppString*))(Il2CppBase() + 0x28662C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Image() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x2866348))(this);
	}
	template <typename T = void> T set_Image(Il2CppString* value) {
		return ((T (*)(ArenaVipBonus*, Il2CppString*))(Il2CppBase() + 0x2866350))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x28663D0))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(ArenaVipBonus*, int32_t))(Il2CppBase() + 0x28663D8))(this, value);
	}
	template <typename T = int32_t> T get_IntValue() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x28663E0))(this);
	}
	template <typename T = void> T set_IntValue(int32_t value) {
		return ((T (*)(ArenaVipBonus*, int32_t))(Il2CppBase() + 0x28663E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_StringValue() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x28663F0))(this);
	}
	template <typename T = void> T set_StringValue(Il2CppString* value) {
		return ((T (*)(ArenaVipBonus*, Il2CppString*))(Il2CppBase() + 0x28663F8))(this, value);
	}
	template <typename T = bool> T get_IsNew() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x2866478))(this);
	}
	template <typename T = void> T set_IsNew(bool value) {
		return ((T (*)(ArenaVipBonus*, bool))(Il2CppBase() + 0x2866480))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaVipBonus*, uintptr_t))(Il2CppBase() + 0x286648C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaVipBonus*, uintptr_t))(Il2CppBase() + 0x28664FC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x28665B0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x28666A4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaVipBonus*, uintptr_t))(Il2CppBase() + 0x2866708))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaVipBonus*))(Il2CppBase() + 0x2866854))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaVipBonus*, uintptr_t))(Il2CppBase() + 0x28669F4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaVipBonus*, uintptr_t))(Il2CppBase() + 0x2866A88))(this, input);
	}

};

}
