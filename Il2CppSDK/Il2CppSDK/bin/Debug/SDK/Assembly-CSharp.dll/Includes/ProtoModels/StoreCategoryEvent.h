#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StoreCategoryEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StoreCategoryEvent"));
	}

	 static MessageParser1<ProtoModels::StoreCategoryEvent*>*& _parser() {
		return *(MessageParser1<ProtoModels::StoreCategoryEvent*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& AvailabilityStartFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& availabilityStart_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& AvailabilityEndFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& availabilityEnd_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& BadgeColorFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& badgeColor_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& BadgeImageAssetPathFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& badgeImageAssetPath_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::StoreCategoryEvent*>* get_Parser() {
		return ((MessageParser1<ProtoModels::StoreCategoryEvent*>* (*)(void *))(Il2CppBase() + 0x141E168))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x141E1CC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E2EC))(this);
	}
	template <typename R = ProtoModels::StoreCategoryEvent*> R Clone() {
		return ((R (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E408))(this);
	}
	template <typename R = int64_t> R get_AvailabilityStart() {
		return ((R (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E464))(this);
	}
	template <typename R = void> R set_AvailabilityStart(int64_t value) {
		return ((R (*)(StoreCategoryEvent*, int64_t))(Il2CppBase() + 0x141E46C))(this, value);
	}
	template <typename R = int64_t> R get_AvailabilityEnd() {
		return ((R (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E474))(this);
	}
	template <typename R = void> R set_AvailabilityEnd(int64_t value) {
		return ((R (*)(StoreCategoryEvent*, int64_t))(Il2CppBase() + 0x141E47C))(this, value);
	}
	template <typename R = Il2CppString*> R get_BadgeColor() {
		return ((R (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E484))(this);
	}
	template <typename R = void> R set_BadgeColor(Il2CppString* value) {
		return ((R (*)(StoreCategoryEvent*, Il2CppString*))(Il2CppBase() + 0x141E48C))(this, value);
	}
	template <typename R = Il2CppString*> R get_BadgeImageAssetPath() {
		return ((R (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E50C))(this);
	}
	template <typename R = void> R set_BadgeImageAssetPath(Il2CppString* value) {
		return ((R (*)(StoreCategoryEvent*, Il2CppString*))(Il2CppBase() + 0x141E514))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(StoreCategoryEvent*, Il2CppObject*))(Il2CppBase() + 0x141E594))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::StoreCategoryEvent* other) {
		return ((R (*)(StoreCategoryEvent*, ProtoModels::StoreCategoryEvent*))(Il2CppBase() + 0x141E604))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E68C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E73C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(StoreCategoryEvent*, uintptr_t))(Il2CppBase() + 0x141E7A0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(StoreCategoryEvent*))(Il2CppBase() + 0x141E88C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::StoreCategoryEvent* other) {
		return ((R (*)(StoreCategoryEvent*, ProtoModels::StoreCategoryEvent*))(Il2CppBase() + 0x141E9D4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(StoreCategoryEvent*, uintptr_t))(Il2CppBase() + 0x141EA4C))(this, input);
	}

};

}
