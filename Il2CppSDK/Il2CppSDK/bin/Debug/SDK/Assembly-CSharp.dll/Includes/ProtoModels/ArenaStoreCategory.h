#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreCategory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreCategory"));
	}

	 static MessageParser1ProtoModels::ArenaStoreCategory*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaStoreCategory*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PriorityFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& priority_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& AltPriorityFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& altPriority_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& type_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& BadgeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& badge_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& BadgeColorFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& badgeColor_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::ArenaStoreCategory*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaStoreCategory*>* (*)(void *))(Il2CppBase() + 0x2718360))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x27183C4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x27184E4))(this);
	}
	template <typename R = ProtoModels::ArenaStoreCategory*> R Clone() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718640))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x271869C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaStoreCategory*, Il2CppString*))(Il2CppBase() + 0x27186A4))(this, value);
	}
	template <typename R = int32_t> R get_Priority() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718724))(this);
	}
	template <typename R = void> R set_Priority(int32_t value) {
		return ((R (*)(ArenaStoreCategory*, int32_t))(Il2CppBase() + 0x271872C))(this, value);
	}
	template <typename R = int32_t> R get_AltPriority() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718734))(this);
	}
	template <typename R = void> R set_AltPriority(int32_t value) {
		return ((R (*)(ArenaStoreCategory*, int32_t))(Il2CppBase() + 0x271873C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Type() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718744))(this);
	}
	template <typename R = void> R set_Type(Il2CppString* value) {
		return ((R (*)(ArenaStoreCategory*, Il2CppString*))(Il2CppBase() + 0x271874C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Badge() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x27187CC))(this);
	}
	template <typename R = void> R set_Badge(Il2CppString* value) {
		return ((R (*)(ArenaStoreCategory*, Il2CppString*))(Il2CppBase() + 0x27187D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_BadgeColor() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718854))(this);
	}
	template <typename R = void> R set_BadgeColor(Il2CppString* value) {
		return ((R (*)(ArenaStoreCategory*, Il2CppString*))(Il2CppBase() + 0x271885C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStoreCategory*, Il2CppObject*))(Il2CppBase() + 0x27188DC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStoreCategory* other) {
		return ((R (*)(ArenaStoreCategory*, ProtoModels::ArenaStoreCategory*))(Il2CppBase() + 0x271894C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x27189FC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718AEC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStoreCategory*, uintptr_t))(Il2CppBase() + 0x2718B50))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718CA4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStoreCategory* other) {
		return ((R (*)(ArenaStoreCategory*, ProtoModels::ArenaStoreCategory*))(Il2CppBase() + 0x2718E7C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStoreCategory*, uintptr_t))(Il2CppBase() + 0x2718F24))(this, input);
	}

};

}
