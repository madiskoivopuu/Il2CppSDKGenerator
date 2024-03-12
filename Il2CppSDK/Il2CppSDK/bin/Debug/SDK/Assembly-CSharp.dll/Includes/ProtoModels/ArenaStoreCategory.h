#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreCategory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreCategory"));
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
	template <typename T = int32_t> static T& PriorityFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& priority_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& AltPriorityFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& altPriority_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& type_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& BadgeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& badge_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& BadgeColorFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& badgeColor_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2718360))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x27183C4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x27184E4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718640))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x271869C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaStoreCategory*, Il2CppString*))(Il2CppBase() + 0x27186A4))(this, value);
	}
	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718724))(this);
	}
	template <typename T = void> T set_Priority(int32_t value) {
		return ((T (*)(ArenaStoreCategory*, int32_t))(Il2CppBase() + 0x271872C))(this, value);
	}
	template <typename T = int32_t> T get_AltPriority() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718734))(this);
	}
	template <typename T = void> T set_AltPriority(int32_t value) {
		return ((T (*)(ArenaStoreCategory*, int32_t))(Il2CppBase() + 0x271873C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Type() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718744))(this);
	}
	template <typename T = void> T set_Type(Il2CppString* value) {
		return ((T (*)(ArenaStoreCategory*, Il2CppString*))(Il2CppBase() + 0x271874C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Badge() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x27187CC))(this);
	}
	template <typename T = void> T set_Badge(Il2CppString* value) {
		return ((T (*)(ArenaStoreCategory*, Il2CppString*))(Il2CppBase() + 0x27187D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_BadgeColor() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718854))(this);
	}
	template <typename T = void> T set_BadgeColor(Il2CppString* value) {
		return ((T (*)(ArenaStoreCategory*, Il2CppString*))(Il2CppBase() + 0x271885C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaStoreCategory*, uintptr_t))(Il2CppBase() + 0x27188DC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaStoreCategory*, uintptr_t))(Il2CppBase() + 0x271894C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x27189FC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718AEC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStoreCategory*, uintptr_t))(Il2CppBase() + 0x2718B50))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStoreCategory*))(Il2CppBase() + 0x2718CA4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaStoreCategory*, uintptr_t))(Il2CppBase() + 0x2718E7C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStoreCategory*, uintptr_t))(Il2CppBase() + 0x2718F24))(this, input);
	}

};

}
