#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StoreCategoryEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StoreCategoryEvent"));
	}

	template <typename T = MessageParser1StoreCategoryEvent*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AvailabilityStartFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& availabilityStart_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& AvailabilityEndFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& availabilityEnd_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& BadgeColorFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& badgeColor_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& BadgeImageAssetPathFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& badgeImageAssetPath_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1StoreCategoryEvent*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x141E168))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x141E1CC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E2EC))(this);
	}
	template <typename T = StoreCategoryEvent*> T Clone() {
		return ((T (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E408))(this);
	}
	template <typename T = int64_t> T get_AvailabilityStart() {
		return ((T (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E464))(this);
	}
	template <typename T = void> T set_AvailabilityStart(int64_t value) {
		return ((T (*)(StoreCategoryEvent*, int64_t))(Il2CppBase() + 0x141E46C))(this, value);
	}
	template <typename T = int64_t> T get_AvailabilityEnd() {
		return ((T (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E474))(this);
	}
	template <typename T = void> T set_AvailabilityEnd(int64_t value) {
		return ((T (*)(StoreCategoryEvent*, int64_t))(Il2CppBase() + 0x141E47C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BadgeColor() {
		return ((T (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E484))(this);
	}
	template <typename T = void> T set_BadgeColor(Il2CppString* value) {
		return ((T (*)(StoreCategoryEvent*, Il2CppString*))(Il2CppBase() + 0x141E48C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BadgeImageAssetPath() {
		return ((T (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E50C))(this);
	}
	template <typename T = void> T set_BadgeImageAssetPath(Il2CppString* value) {
		return ((T (*)(StoreCategoryEvent*, Il2CppString*))(Il2CppBase() + 0x141E514))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(StoreCategoryEvent*, Il2CppObject*))(Il2CppBase() + 0x141E594))(this, other);
	}
	template <typename T = bool> T Equals_1(StoreCategoryEvent* other) {
		return ((T (*)(StoreCategoryEvent*, StoreCategoryEvent*))(Il2CppBase() + 0x141E604))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E68C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E73C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(StoreCategoryEvent*, uintptr_t))(Il2CppBase() + 0x141E7A0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E88C))(this);
	}
	template <typename T = void> T MergeFrom(StoreCategoryEvent* other) {
		return ((T (*)(StoreCategoryEvent*, StoreCategoryEvent*))(Il2CppBase() + 0x141E9D4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(StoreCategoryEvent*, uintptr_t))(Il2CppBase() + 0x141EA4C))(this, input);
	}

};

}
